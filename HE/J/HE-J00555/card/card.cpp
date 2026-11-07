#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+5];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int d[m+5];
	for(int i=1;i<=m;i++)
	{
		d[i]=0;
	}
	int x=n;
	while(n!=0)
	{
		if(x==0)
			n--;
		
		for(int i=1;i<=n;i++)
		{
			d[a[i]]++;
		}
		
	}
	for(int i=1;i<=m;i++)
	{
		cout<<d[i]<<" ";
	}
	return 0;
}
