#include <iostream>
#include <vector>


using namespace std;


int recursive(int n,int &count)
{
    count++;
    if(n==1)
    {
        // cout<<"here 1";
        return 1;
    }
    else if(n%2!=0)
    {
        // cout<<"here odd"<<endl;
        return recursive(3*n+1,count);
    }    
    else
    {
        // cout<<"here even"<<endl;
       return recursive(n/2,count);
    }
}

int main()
{
    int a=0,b=0,max=0,temp=0;
    vector<vector<int>>arr;


    while(cin>>a>>b)
    {
        vector<int>vec;
        vec.push_back(a);
        vec.push_back(b);
        arr.push_back(vec);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        max=0;
        int l=0,r=0;
        if(arr[i][0]<arr[i][1])
        {
            r=arr[i][0];
            l=arr[i][1];
        }else
        {
            r=arr[i][1];
            l=arr[i][0];
        }
        for (int value = l; value >= r; value--)
        {
            int count=0;
            recursive(value,count);
            if(count>max)
            {
                max=count;
            }
        }
        cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<max<<endl;
    }
    
        
}


