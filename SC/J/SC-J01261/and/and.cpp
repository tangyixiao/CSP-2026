#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int a[1001001];
bool cmp(int x,int y)
{
	return x>y;
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    int maxm = -1e9;
    for(int i = 1;i<=n;i++)
    {
    	cin>>a[i];
    	maxm = max(maxm,a[i]);
	}
	if(m == 1)
	{
		cout<<maxm;
		return 0;
	}
	if(m == n)
	{
		int ans1 = a[1];
		for(int i = 2;i<=n;i++)
		{
			ans1 = ans1&a[i];
		}
		cout<<ans1;
		return 0;
	}
	if(m == 2)
	{
		int maxn = -1e9;
		for(int i = 1;i<n;i++)
		{
			for(int j =i+1;j<=n;j++)
			{
				maxn = max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	if(n <= 20&&m<=n)
	{
		sort(a+1,a+n+1,cmp);
		int ans = a[1];
		for(int i = 2;i<=m;i++)
		{
			ans = ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m == n-1)
	{
		int maxxn = -1e9;
		for(int i = 1;i<=n;i++)
		{
			int op = 1;
			for(int j = 1;j<=n;j++)
			{
				if(j == i)
				{
					continue;
				}
				op = op&a[j];
			}
			maxxn = max(maxxn,op);
		}
		cout<<maxxn;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	int anss = a[1];
	for(int i = 2;i<=m;i++)
	{
		anss = anss&a[i];
	}
	cout<<anss;
	return 0;
}
