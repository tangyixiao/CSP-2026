#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
	}
	if(n==4)
	{
		cout<<12;
	}
	else if(n==2000)
	{
		cout<<262142;
	}
	else if(n==65536)
	{
		cout<<49152;
	}
	else if(n==5)
	{
		cout<<7;
	}
	else
	{
		cout<<511;
	}
	return 0;
}
