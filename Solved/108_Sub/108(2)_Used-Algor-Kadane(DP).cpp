#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


/*This program show the Kadane Algorithm used in UVA Problem 108
Kadane Algorithm - Dynamic Programming
It's used to find the Maximum Sum Subarray in the given array

*/


void kadane(vector<int>,int&,int&);

int main()
{
    int temp=0;
    int l=0,r=0;
    vector<int>input;
    while(cin>>temp)
    {
        input.push_back(temp);
    }
    kadane(input,l,r);
    cout<<"l:"<<l<<", r:"<<r<<endl;
}



void kadane(vector<int>arr,int &l,int &r)
{
    int current_max=0,global_max=0;
    int start=0,end=0,mstart=0,mend=0;
    for ( int i = 0; i < arr.size(); i++)
    {
        if(i==0)
        {
            current_max=global_max=arr[i];
        }else
        {
            if (arr[i]>current_max+arr[i])
            {
                start=i;
                current_max=arr[i];
            }else
            {
              current_max=current_max+arr[i];  
            }
            end=i;
            if(current_max>global_max)
            {
                global_max=current_max;
                l=start;
                r=end;
            }
        }
    }
    
}






