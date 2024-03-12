#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int,int);

int mod,n;
int main()
{
    while(cin>>n>>mod)
    {
        
        cout<<n<<" "<<mod<<endl;
        if (n==0&&mod==0)
        {
            break;
        }
        vector<int>arr;
        int temp=0;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end(),cmp);
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }

}

bool odd_chk(int n)
{
    return n%2;
}

bool cmp(int a,int b)
{

    if (a%mod==b%mod)  
    {
        if (odd_chk(a)==odd_chk(b)&&odd_chk(a))
        {
            return a>b;
        }else if(odd_chk(a)==odd_chk(b)&&!odd_chk(a))
        {
            return a<b;
        }else
        {
            return odd_chk(a);
        }
    }
    return a%mod < b%mod;
    
    

    
    
}