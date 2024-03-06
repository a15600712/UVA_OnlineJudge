#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int kadane(vector<int>row_sum)
{
    int current_max=0,global_max=0;
            for ( int i = 0; i < row_sum.size(); i++)
            {
                if(i==0)
                {
                    current_max=global_max=row_sum[i];
                }else
                {
                    if (row_sum[i]>current_max+row_sum[i])
                    {
                        current_max=row_sum[i];
                    }else
                    {
                    current_max=current_max+row_sum[i];  
                    }
                    if(current_max>global_max)
                    {
                        global_max=current_max;
                    }
                }
            }
    return global_max;
}

void maxRec(vector<vector<int>>matrix,int n)
{
    int maxRectangleSum=0;
    vector<int>row_sum(n);
    for (int left = 0; left <  matrix.size(); left++)
    {
        for (int i = 0; i < n; i++)
        {
            row_sum[i]=0;
        }
        for (int right = left; right <  matrix.size(); right++)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                row_sum[i]+=matrix[i][right];
            }
            int max=kadane(row_sum);
            if(maxRectangleSum<max)
            {
                maxRectangleSum=max;
            }
        }

    }
    cout<<maxRectangleSum<<endl;
       
}






int main()
{
    vector<vector<int>>matrix;
    vector<int>vec;
    int a,n,top=0,bot=0,left=0,right=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        vector<int>temp;
        for (int j = 0; j < n; j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        matrix.push_back(temp);   
    }
    maxRec(matrix,n);
    return 0;
} 

