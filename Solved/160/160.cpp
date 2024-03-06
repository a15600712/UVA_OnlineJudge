#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

void fac(vector<int>);
bool prime(int);
int main()
{
    int temp=-1;
    vector <int>arr;
    while(cin>>temp&&temp!=0)
    {
        arr.push_back(temp);

    }
    fac(arr);
    
    return 0;

}


void fac(vector<int>arr)
{
    int x=1;
    int sum=0;
    for (int i = 0; i < arr.size(); i++)
    {
        vector<int>primes;
        cout<<setw(3)<<right<<arr[i]<<"! =";
        for (int j = 2; j <= arr[i]; j++)
        {
            if(prime(j)==1)
            {
                x=1;
                sum=0;
                while(arr[i]/pow(j,x)>0)
                {
                    sum+=arr[i]/pow(j,x);
                    x++;
                }
                primes.push_back(sum);
            }
            
        }
    for (int i = 0; i < primes.size(); i++)
    {
        if (i%15==0&&i!=0)
        {
            cout<<"\n      ";
        }
        cout<<setw(3)<<right<<primes[i];
    }
    cout<<endl;
    }
    
    
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

