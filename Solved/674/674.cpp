#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void dp(vector<int> ,int[][7500] );

int main()
{
    vector<int>cent={1,5,10,25,50};
    int temp=0;
    vector<int>amount;
    int table[cent.size()][7500]={0};
    dp(cent,table);
    while(cin>>temp)
    {
        cout<<table[cent.size()-1][temp]<<endl;
    }

    
    return 0;   
}

void dp(vector<int>cent ,int table[][7500])
{
    
    for (int i = 0; i < cent.size(); i++)
    {
        table[i][0]=1;
        for (int j = 0; j < 7500; j++)
        {
            if (i==0&&j%cent[i]==0)
            {
                table[i][j]=1;
            }else if(i!=0&&j-cent[i]<0)
            {
                table[i][j]=table[i-1][j];
            }else if(i!=0&&j-cent[i]>=0)
            {
                table[i][j]=table[i-1][j]+table[i][j-cent[i]];
            }
            
        }
        
    }
    
}