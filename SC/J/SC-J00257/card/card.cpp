#include <bits/stdc++.h>
using namespace std;
struct sd
{
	bool a;int b;
}l[200005];
int a[500005];
int b[150005][3000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=n;i>=1;i--)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(l[a[i]].a)
		{
			for(int j=1;j<=m;j++)
			{
				b[i][j]=b[l[a[i]].b][j];
			}
		}
		else 
		{
			for(int j=1;j<=m;j++)
			{
				b[i][j]=b[i-1][j];
			}
			b[i][a[i]]++;
		}
		l[a[i]].b=i;
		l[a[i]].a=1;
	}
	for(int i=1;i<=m;i++)
	{
		long long x=0;
		for(int j=1;j<=n;j++)
		{
			x+=b[j][i];
		}
		cout<<x<<' ';
	}
	return 0;
}