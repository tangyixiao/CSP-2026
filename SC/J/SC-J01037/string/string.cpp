#include<bits/stdc++.h>
using namespace std;



int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	
	string x;
	for(int j=0;j<n;j++)
	{
		int a;
		string b;
		cin>>a>>b;
		for(int i=0;i<a;i++)
		{
			x+=b;
		}
	}
	//cout<<x;
	int num;
	for(int i=0;i<x.size()/2;i++)
	{
		if(x[i]!=x[x.size()-i-1])
		{
			num++;
			//cout<<i<<"  ";
		}
	}
	cout<<num;
	return 0;
}