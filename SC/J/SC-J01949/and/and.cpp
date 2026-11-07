#include <bits/stdc++.h>
using namespace std;
#define int long long
#define eb emplace_back
#define pii pair <int, int>
#define fi first
#define se second
constexpr int MAXN = 200005;
int n, m;
int a[MAXN];
int ans;
int a1[MAXN];
signed main ()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i ++)
	{
		cin >> a[i]; 
	}
	for (int bit = 29 ; bit >= 0 ; bit --)
	{
		int cnt = 0;
		set <int> s;
		for (int i = 1 ; i <= n ; i ++)
		{
			if (a[i] & (1 << bit))
			{
				cnt ++;
				s.insert(i);
			}
		}
		if (cnt >= m)
		{
			ans += (1 << bit);
			int tot = 1;
			for (auto it : s)
			{
				a1[tot] = a[it];
				tot ++;
			}
			for (int i = 1 ; i < tot ; i ++)
			{
				a[i] = a1[i];
			}
			n = tot - 1;
		}
	}
	cout << ans;
	return 0;
}//9:09

