#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace  std;

void dp(vector<int> ,int);


int main()
{
    int test_case=0;
    vector<int>target_length;
    vector<int>bars_count;
    vector<vector<int>>bars_length;
    cin>>test_case;
    for (int i = 0; i < test_case; i++)
    {
        int tmp=0;
        cin>>tmp;
        target_length.push_back(tmp);
        cin>>tmp;
        bars_count.push_back(tmp);
        vector<int>vec;
        for (int j = 0; j < tmp; j++)
        {
            int x=0;
            cin>>x;
            vec.push_back(x);
        }
        bars_length.push_back(vec);
    }

    for (int i = 0; i < test_case; i++)
    {
        sort(bars_length[i].begin(),bars_length[i].end());
        dp(bars_length[i],target_length[i]);
    }
    
    


    return 0;
}


using namespace std;

void dp(vector<int>bars_length , int target_length)
{
    //4,660
    int table[bars_length.size()][target_length+1]={0};
    for (int i = 0; i < bars_length.size(); i++)
    {
        table[i][0]=1;
        for (int j = 0; j < target_length+1; j++)
        {
            if (i==0&&j==bars_length[i])
            {
                table[i][j]=1;
            }else if(i!=0&&j-bars_length[i]<0)
            {
                table[i][j]=table[i-1][j];
            }else if(i!=0&&j-bars_length[i]>=0)
            {
                table[i][j]=table[i-1][j]+table[i-1][j-bars_length[i]];
            }
            
        }
        
    }
    for (int i = 0; i < bars_length.size(); i++)
    {
        if (table[i][target_length]==1)
        {
            cout<<"YES"<<endl;
            return;
        }
        
    }
    cout<<"NO"<<endl;
    return;
}