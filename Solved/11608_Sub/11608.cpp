#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void chk(vector<int>,vector<int>);

int main()
{
    int tmp=0;
    
    vector<vector<int>>created;
    vector<vector<int>>need;
    while (cin>>tmp&&tmp>=0)
    {
        vector<int>vec1;
        vec1.push_back(tmp);
        for (int i = 1; i <= 12; i++)
        {
            int input=0;
            cin>>input;
            vec1.push_back(input);
        }
        created.push_back(vec1);
        vector<int>vec2;
        for (int i = 0; i < 12; i++)
        {
            int input=0;
            cin>>input;
            vec2.push_back(input);
        }
        need.push_back(vec2);
    }
    for (int  i = 0; i < created.size(); i++)
    {
        cout<<"Case "<<i+1<<":"<<endl;
        chk(created[i],need[i]);
    }
    
    
    return 0;
}



void chk(vector<int>created,vector<int>need)
{
    int current=created[0];
    for (int i = 1; i <=12; i++)
    {
        if(current<need[i-1])
        {
            cout<<"No problem. :("<<endl;
            current+=created[i];
        }else if(current>=need[i-1])
        {
            cout<<"No problem! :D"<<endl;
            current=current-need[i-1]+created[i];
        }
    }
    



}

