#include <iostream>
#include <vector>

using namespace std;


int month(string str);
vector<vector<int>> convert(vector<vector<int>>);
string m(int);

int main()
{
    int loop=0;
    cin>>loop;
    int a=0,b=0;
    string str;
    vector<vector<int>>arr,result;

    for (int i = 0; i < loop; i++)
    {
        vector<int>vec;
        scanf("%d.",&a);
        cin>>str>>b;
        vec.push_back(a);
        vec.push_back(month(str));
        vec.push_back(b);
        arr.push_back(vec);
    }
    result=convert(arr);
    cout<<result.size()<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if(j==0)
            {
                cout<<result[i][j]<<" ";
            }else if (j==1)
            {
                cout<<m(result[i][j])<<" ";
            }else if(j==2)
            {
                cout<<result[i][j];
            }
            
        }
        cout<<endl;
    }
    
}



vector<vector<int>> convert(vector<vector<int>>arr)
{
    vector<int>days;
    for (int i = 0; i < arr.size(); i++)
    {
        int temp;
        if(arr[i][1]>=1&&arr[i][1]<=18)
        {
            days.push_back(arr[i][0]+(arr[i][1]-1)*20+arr[i][2]*365);
        }else
        {
            days.push_back(arr[i][0]+18*20+arr[i][2]*365);
        }
    }
    vector<vector<int>>result;
    
    for (int i = 0; i < arr.size(); i++)
    {
        vector<int>vec;
        vec.push_back(days[i]%13+1);
        vec.push_back(days[i]%20);
        vec.push_back(days[i]/260);
        result.push_back(vec);
    }
    return result;
}

string m(int m)
{
    if(m==0)
    {
        return "imix";
    }else if(m==1)
    {
        return "ik";
    }else if(m==2)
    {
        return "akbal";
    }else if(m==3)
    {
        return "kan";
        
    }else if(m==4)
    {
        return "chicchan";
    }else if(m==5)
    {
        return "cimi";
    }else if(m==6)
    {
        return "manik";
    }else if(m==7)
    {
        return "lamat";
    }else if(m==8)
    {
        return "muluk";
    }else if(m==9)
    {
        return "ok";
    }else if(m==10)
    {
        return "chuen";
    }else if(m==11)
    {
        return "eb";
    }else if(m==12)
    {
        return "ben";
    }else if(m==13)
    {
        return "ix";
    }else if(m==14)
    {
        return "mem";
    }else if(m==15)
    {
        return "cib";
    }else if(m==16)
    {
        return "caban";
    }else if(m==17)
    {
        return "eznab";
    }else if(m==18)
    {
        return "canac";
    }else if(m==19)
    {
        return "ahau";
    }else{
        return "error!";
    }
}

int month(string str)
{
    if(str=="pop")
    {
        return 1;
    }else if(str=="no")
    {
        return 2;
    }else if(str=="zip")
    {
        return 3;
    }else if(str=="zotz")
    {
        return 4;
    }else if(str=="tzec")
    {
        return 5;
    }else if(str=="xul")
    {
        return 6;
    }else if(str=="yoxkin")
    {
        return 7;
    }else if(str=="mol")
    {
        return 8;
    }else if(str=="chen")
    {
        return 9;
    }else if(str=="yax")
    {
        return 10;
    }else if(str=="zac")
    {
        return 11;
    }else if(str=="ceh")
    {
        return 12;
    }else if(str=="mac")
    {
        return 13;
    }else if(str=="kankin")
    {
        return 14;
    }else if(str=="muan")
    {
        return 15;
    }else if(str=="pax")
    {
        return 16;
    }else if(str=="koyab")
    {
        return 17;
    }else if(str=="cumhu")
    {
        return 18;
    }else if(str=="uayet")
    {
        return 19;
    }

        return -1;
}

