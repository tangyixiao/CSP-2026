#include<bits/stdc++.h>
using namespace std;
long long n,m,maxx = -1,p,f;
long long a[200005],b[200005];
void dfs(int k)
{
	int u = k,cnt = 1;
	if((n - k) >= 1 && (k + 1 - f) < m)
	{
		while(u < n && n - u >= (m - 2))
		{
			u ++;
			b[++cnt] = a[u];
			dfs(u);
			cnt = 1;
			memset(b,0,sizeof(b));
		}
	}
	else
	{
		p = a[f];
		for(int i = 2;i <= m - 1;i ++)
		{
			p &= b[i];
		}
		int q = p;
		for(int i = u + 1;i <= n;i ++)
		{
			int t = a[i];
			p = q;
			p &= t;
			if(p > maxx)
			{
				maxx = p;
			}
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(a,-1,sizeof(a));
	cin>>n>>m;
	for(int i = 1;i <= n;i ++)
	{
		cin>>a[i];
	}
	if(m == 1)
	{
		for(int i = 1;i <= n;i ++)
		{
			if(maxx < a[i])
			{
				maxx = a[i];
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m == n)
	{
		maxx = a[1];
		for(int i = 2;i <= n;i ++)
		{
			maxx &= a[i];
		}
		cout<<maxx;
		return 0;
	}
	for(int i = 1;i <= n - m + 1;i ++)
	{
		p = a[i];
		f = i;
		b[1] = a[i];
		dfs(i);
	}
	cout<<maxx;
	return 0;
}
