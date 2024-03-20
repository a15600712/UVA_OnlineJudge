#include <iostream>

using namespace std;

int main()
{
	int t_case=0;
	
	cin>>t_case;
	int a=0,b=0,result=0;
	for	(int i=0; i<t_case; i++)
	{
		result=0;
		cin>>a>>b;
		for(int j=a;j<=b;j++)
		{
			if(j%2==1)
			{
				result+=j;
			}
		}
		cout<<"Case "<<i+1<<": "<<result<<endl;
	}


}