#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;



int main()
{
    vector<bool>not_prime(1299710);
    fill(not_prime.begin(), not_prime.end(), false);
    not_prime[0]=true;
    not_prime[1]=true;
    for (int i = 2; i < 1299710; i++)
    {
        if(not_prime[i]==false)
        {
            for (int j = i+i; j < 1299710; j+=i)
            {
                not_prime[j]=true;
            }
        }
    }
    int n=0;
    cin>>n;
    cout<<n<<endl;
    for (int i = 0; i <= n; i++)
    {

        if (not_prime[i]==false)
        {
            cout<<i<<" ";
        }
        
    }
    
    return 0;
}

