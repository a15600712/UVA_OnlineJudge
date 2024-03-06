#include <iostream>
#include <vector>

using namespace std;
long long int fac(long long int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fac(n-1);
    }
}

int main()
{

    long long int input=0,result=0;
    vector<long long int>arr;
    while(cin>>input)
    {
        arr.push_back(input);
    }
       
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>13||(arr[i]<0&&arr[i]%2!=0))
        {
            cout<<"Overflow!"<<endl;
        }else if(arr[i]<8||(arr[i]<0&&arr[i]%2==0))
        {
            cout<<"Underflow!"<<endl;   
        }else
        {
            result=fac(arr[i]);
            cout<<result<<endl;
        }

    }
 
}