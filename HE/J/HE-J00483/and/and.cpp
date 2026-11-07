#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, m;
int a[210101];
int dp[210101];

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a+1, a+1+n, greater<int>());
	int maxn=-1e9;
	for (int i = 1; i <= n-m+1; i++)
	{
		int now=a[i];
		for (int j = i+1; j <= i+m-1; j++)
		{
			now=now&a[j];	
		} 
		maxn=max(maxn, now);
	}
	cout << maxn;
	return 0;
}

