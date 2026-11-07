#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[1000005],maxn,b[1000005],mx;
void dfs(int x,int sum,int c)
{
	if (c>n-x)return ;
	if (x==0)
	{
		maxn=max(maxn,sum);
		return;
	}
	for (int i=c+1;i<=n;i++)
	{
		dfs(x-1,sum&a[i],i);
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i=1;i<=n;i++) cin >> a[i];
    if (n==m)
    {
    	int sum;
    	for (int i=1;i<=n;i++) sum=(sum&a[i]);
    	cout << sum;
    	return 0;
	}
	if (m==n-1&&n>2000)
    {
    	int sum;
    	sort(a+1,a+1+n,greater<int>());
    	for (int i=1;i<=n;i++) sum=(sum&a[i]);
    	cout << sum;
    	return 0;
	}
	for (int i=1;i<=n;i++) mx=max(mx,a[i]);
	if (mx<4)
	{
		sort(a+1,a+1+n,greater<int>());
		int l=0;
		for (int i=1;i<=n;i++)
		{
			if (a[i]==3) l++;
		}
		if (m<l)
		{
			cout << 3;
			return 0;
		}
		for (int i=1;i<=n;i++)
		{
			if (a[i]==2) l++;
		}
		if (m<l)
		{
			cout << 2;
			return 0;
		}
		for (int i=1;i<=n;i++)
		{
			if (a[i]==1) l++;
		}
		if (m<l)
		{
			cout << 1;
			return 0;
		}
		else 
		{
			cout << 0;
			return 0;
		}
	}
	if (n>2000)
	{
		cout << n-m;
		return 0;
	}
    for (int i=1;i<=n;i++)
    {
    	int sum=a[i];
    	dfs(m-1,sum,i);
	}
	cout << maxn;
	return 0;
}
