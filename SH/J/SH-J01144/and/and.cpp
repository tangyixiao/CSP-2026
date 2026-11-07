#include<bits/stdc++.h>
using namespace std;
int a[200005];
long long ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	if(m == 1)
	{
		sort(a+1,a+n+1);
		cout << a[n];
		return 0;
	}
	if(m == n)
	{
		ans = a[1];
		for(int i=2;i<=n;i++)
		{
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if(m == 2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				long long x = a[i] & a[j];
				ans = max(ans,x);
			}
		}
		cout << ans;
		return 0;
	}
	if(m == n-1)
	{
		long long x = a[1];
		for(int i=1;i<=n;i++)
		{
			for(int j=2;j<=n;j++)
			{
				if(i = a[1])
				{
					x = a[2];
					j = 3;
				}
				if(a[j] = a[i])
					continue;
				x &= a[j];
			}
			ans = max(ans,x);
		}
		cout << ans;
	}
	return 0;
}
