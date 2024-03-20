#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	int a=0,b=0;
	bool ok=true;
	while(cin>>a>>b)
	{
		if(b==1)
		{
		cout<<"Boring!"<<endl;
		continue;
		} 
		vector<int>arr;
		int temp=a;
		while(temp!=0)
		{
			if(temp%b==0||temp==1)
			{
				
				arr.push_back(temp);
				temp/=b;
				
			}else
			{
				cout<<"Boring!"<<endl;
				arr.clear();
				break;
			}
		}
		for	(int i=0;i<arr.size();i++)
		{
			if(arr[i]==1)
				cout<<arr[i]<<endl;
			else
				cout<<arr[i]<<" ";
		
		}
		
	}


}
