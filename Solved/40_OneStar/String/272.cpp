#include <iostream>
#include <cstring>


using namespace std;


int main()
{

	string str;
	int count=0;
	while(getline(cin,str))
	{
		
		for	(int i=0; str[i]!='\0';i++)
		{
			if(str[i]=='"'&&count%2==0)
			{
				cout<<"``";
				count++;
			}else if(str[i]=='"'&&count%2==1)
			{
				cout<<"''";
				count++;
			}else if(str[i]=='\n')
			{
				cout<<endl;
			}else
			{
				cout<<str[i];
			}
		}
		cout<<endl;
	}
	


}