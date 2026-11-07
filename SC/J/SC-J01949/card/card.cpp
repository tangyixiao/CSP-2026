#include <bits/stdc++.h>
using namespace std;
#define int long long
#define eb emplace_back
#define pii pair <int, int>
#define fi first
#define se second
constexpr int MAXN = 500005;
int n, m;
int a[MAXN];
int v[MAXN];
int vis[MAXN];
int ans[MAXN];
int len;
signed main ()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i ++)
	{
		cin >> a[i];
	}
	for (int i = 1 ; i <= n ; i ++)
	{
		len = 0;
		for (int ls = i ; ls <= n ; ls ++)
		{
			v[len] = a[ls];
			len ++;
			if (vis[a[ls]])
			{
				len --;
				for (int j = len - 1 ; (v[j] != a[ls]) and j >= 0 ; j --)
				{
					vis[v[j]] = 0;
					len --;
				}
			}
			vis[a[ls]] = ls;
		}
		for (int kk = 0 ; kk < len ; kk ++)
		{
			ans[v[kk]] ++;
			vis[v[kk]] = 0;
		}		
	}
	for (int i = 1 ; i <= m ; i ++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}//10：40