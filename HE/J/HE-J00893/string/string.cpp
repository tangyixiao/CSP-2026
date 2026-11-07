#include <bits/stdc++.h>
using namespace std;
int a[1000];
int b[1000];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,flag=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=a[n-i])
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<0;
	}
	return 0;
}
