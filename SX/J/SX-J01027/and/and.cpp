#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[100005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i=1;i<=n;i++)
		cin >> a[i];
	if (n==m)
	{
		int ans = a[1];
		for (int i=2;i<=n;i++)
		{
			ans &= a[i];
		}
		cout << ans;
	}
	else
	{
		if (m==1)
		{
			long long ma = -1;
			for(int i=1;i<=n;i++)
				ma = max(ma,a[i]);
			cout << ma;
			return 0;
		}
		sort(a+1,a+n+1);
		int ans = a[n];
		for (int i=n-1;i>n-m;i--)
		{
			ans &= a[i];
		}
		cout << ans;
	}
	return 0;
}