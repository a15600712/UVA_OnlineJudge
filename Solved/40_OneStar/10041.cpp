#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t_case;
	cin>>t_case;
	for	(int i=0;i<t_case;i++)
	{
		
		vector<int>arr;
		int num;
		cin>>num;
		for	(int j=0;j<num;j++)
		{
			int tmp;
			cin>>tmp;
			arr.push_back(tmp);
		}
		sort(arr.begin(),arr.end());
		int sum=0;
		for	(int i=0;i<arr.size();i++)
		{
			sum+=abs(arr[i]-arr[arr.size()/2]);
		}
		cout<<sum<<endl;
	}

}