#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


vector<bool>numbers(1299710);

void sieve()
{
    fill(numbers.begin(),numbers.end(),false);  
    numbers[0]=1;
    numbers[1]=1;
    for (int i = 2; i < 1299710; i++)
    {
        if(numbers[i]==0)
        {
            for (int j = i+i; j < 1299710; j+=i)
            {
                numbers[j]=true;
            }
            
        }
    }
    
}

int main()
{
    sieve();
    int input=0;
    vector<int>arr;
    while (cin>>input&&input!=0)
    {
        arr.push_back(input);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (numbers[arr[i]]==0)
        {
            cout<<"0"<<endl;
        }else
        {
            int l,r;
            for (int j = arr[i]; j>=2 ; j--)
            {
                if(numbers[j]==0)
                {
                    l=j;
                    break;
                }
            }
            for (int k = arr[i]+1; k<1299710 ; k++)
            {
                if(numbers[k]==0)
                {
                    r=k;
                    break;
                }
            }
            cout<<r-l<<endl;
        }
        
    }
    
}