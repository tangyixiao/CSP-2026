#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+4,M = 3e5+4;
int n,m;
int a[N];
int p[M];
int ans[N];
int f[M];

void solve3()
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++) p[j] = 0;
		for(int j=i; j<=n; j++)
		{
			if(p[a[j]])
				for(int k=p[a[j]]; k<=j; k++)
					p[a[k]] = 0;
			p[a[j]] = j;
		}
		for(int j=1; j<=m; j++)
			if(p[j])
				ans[j]++;
	}
	for(int i=1; i<=m; i++) printf("%d ",ans[i]);
}

void solve2()
{
	for(int i=n; i>=1; i--)
	{
		if(f[a[i]])
		{
			for(int k=f[a[i]]; k>=i; k--) f[a[k]] = 0;
		}
		f[a[i]] = i;
		for(int j=1; j<=m; j++)
			if(f[j])
				ans[j]++;
		cout << i << "->";
		for(int j=1; j<=m; j++)
			cout << ans[j] << " ";
		cout << "\n";
	}
	for(int i=1; i<=m; i++) printf("%d ",ans[i]);
}

void solve()
{
	solve3();
}

signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++) scanf("%d",a+i);
	solve3();
	return 0;
}
/*
key:
Trick||Treat!
11:00
*/
