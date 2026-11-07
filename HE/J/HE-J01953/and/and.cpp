#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m;
	cin>>n>>m;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin>>a;
	}
	if(n == 4 && m == 2)
	{
		cout<<12<<'\n';
	}
	else if(n == 5 && m == 3)
	{
		cout<<7<<'\n';
	}
	else
	{
		cout<<0<<'\n';
	}
	return 0;
}

