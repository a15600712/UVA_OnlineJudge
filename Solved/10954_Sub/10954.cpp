#include <cmath>
#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int sum(vector<int>);

int main()
{
    int temp=-1,x;
    vector<vector<int>>arr;

    while(cin>>temp&&temp!=0)
    {
        vector<int>vec;
        for (int i = 0; i < temp; i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        arr.push_back(vec);

    }

    for (int  i = 0; i < arr.size(); i++)
    {
        cout<<sum(arr[i])<<endl;
    }
    
    return 0;
}

int sum(vector<int>arr)
{
    int tmp1=0,tmp2=0,sum=0;
    vector<int>s;
    while(arr.size()>1)
    {
        sum=0;
        sort(arr.begin(),arr.end(),greater<int>());
        tmp1=arr.back();
        arr.pop_back();
        
        tmp2=arr.back();
        arr.pop_back();

        sum=tmp1+tmp2;
        s.push_back(sum);
        arr.insert(arr.begin(),sum);
    }
    int x=0;
    for (int i = 0; i < s.size(); i++)
    {
        x+=s[i];
    }
    
    
    return x;
}