#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool prime(int);

int main()
{
    int temp=0;
    vector<int> n;
    while(cin>>temp)
    {
        n.push_back(temp);
    }
    for (int i = 0; i < n.size(); i++)
    {
        cout<<n[i]<<"---"<<prime(n[i])<<endl;
    }
    
    return 0;
}

bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

