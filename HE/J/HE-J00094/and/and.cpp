#include<bits/stdc++.h>
#define int long long
using namespace std;
constexpr int N = 2e5 + 66;
using ll = long long;
int n, m, a[N];
bool vis[N];
signed main()
{
	freopen("and.in", "r", stdin);freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++) cin >> a[i];
	for(int i = 30;i >= 0;i --)
	{
		int now = 1 << i, cnt = 0;
		for(int j = 1;j <= n;j ++) if(a[j] & now && !vis[j]) cnt ++;
		if(cnt >= m) for(int j = 1;j <= n;j ++) if(!(a[j] & now)) vis[j] = 1;
		if(cnt == m) break;
	}
	int ans = (1ll << 31) - 1;
	for(int i = 1;i <= n;i ++) if(!vis[i]) ans &= a[i];
	cout << ans << '\n';
	return 0;
}
