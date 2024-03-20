
//== 以上是自[瘋狂雲端]下載的資料 請自行剪貼到各檔中進行寫作

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){

	int t;
	cin>>t;
	cin.ignore();
	for(int i=0;i<t;i++)
	{
		int a,b;
		string str,line;
		getline(cin,line);
		istringstream iss(line);
		if(iss>>a)
		{
			if(iss>>b)
			{
				cout<<a<<" "<<b<<endl;
			}
		}
		iss.clear();
		iss.str(line);
		if(iss>>str>>b)
		{
			if(str=="Jan")
			{
				cout<<"1 "<<b<<endl;
			}else if(str=="Feb")
			{
				cout<<"2 "<<b<<endl;
			}else if(str=="Mar")
			{
				cout<<"3 "<<b<<endl;
			}else if(str=="Apr")
			{
				cout<<"4 "<<b<<endl;
			}else if(str=="May")
			{
				cout<<"5 "<<b<<endl;
			}else if(str=="Jun")
			{
				cout<<"6 "<<b<<endl;
			}else if(str=="Jul")
			{
				cout<<"7 "<<b<<endl;
			}else if(str=="Aug")
			{
				cout<<"8 "<<b<<endl;
			}else if(str=="Sep")
			{
				cout<<"9 "<<b<<endl;
			}else if(str=="Oct")
			{
				cout<<"10 "<<b<<endl;
			}else if(str=="Nov")
			{
				cout<<"11 "<<b<<endl;
			}else if(str=="Dec")
			{
				cout<<"12 "<<b<<endl;
			}
		}
		
	}

}
//
