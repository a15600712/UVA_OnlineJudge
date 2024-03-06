#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace  std;

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
        cout<<"Target Length:"<<target_length[i]<<endl;
        cout<<"Bars Length:";
        for (int k = 0; k < bars_count[i]; k++)
        {
            cout<<bars_length[i][k]<<" ";
        }
        cout<<endl;
    }
    
    


    return 0;
}