#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a==0&&b==0) break;
		int x[10]={0};
		int y[10]={0};
		int temp1=a;
		int temp2=b;
		int i=0;
		while(temp1!=0)
		{
			x[i]=temp1%10;
			temp1/=10;
			i++;
		}
		i=0;
		while(temp2!=0)
		{
			y[i]=temp2%10;
			temp2/=10;
			i++;
		}

		int count=0;
		int carry=0;
		for	(i=0;i<10;i++)
		{
			if(x[i]+y[i]+carry>=10)
			{
				carry=1;
				count++;
			}else
			{
				carry=0;
			}
		}
		if(count==0) cout<<"No carry operation."<<endl;
		else if(count==1) cout<<count<<" carry operation."<<endl;
		else cout<<count<<" carry operations."<<endl;
	}

}