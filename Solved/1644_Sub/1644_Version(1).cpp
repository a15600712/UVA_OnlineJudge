#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int prime(int);

int main()
{
    int input=-1;
    vector<int>arr;
    while (cin>>input&&input!=0)
    {
        arr.push_back(input);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<prime(arr[i])<<endl;
    }
    
    return 0;
}


int prime(int gap)
{   
    bool check=false;
    for (int i = 2; i < gap; i++)
    {
        if (gap%i==0)
        {
            check=true;
            break;
        }   
    }
    
    if(check==1)
    {

        int l=0;
        bool p=true;
        for (int i = gap; i >= 2; i--)
        {
            p=true;
            for (int j = 2; j < i; j++)
            {
                if(i%j==0)
                {
                    p=false;
                    break;
                }
            }
            if(p == 1 )
            {
                l=i;
                break;
            }
        }
        int r=0;
        for (int i = gap; i <= 1299709; i++)
        {
            p=true;
            for (int j = 2; j < i; j++)
            {
                if(i%j==0)
                {
                    p=false;
                    break;
                }
            }
            if(p == 1 )
            {
                r=i;

                break;
            }
        }
        return r-l;
    }else{
        return 0;
    }


  
    
}


