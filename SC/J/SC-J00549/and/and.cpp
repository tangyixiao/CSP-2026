#include<bits/stdc++.h>
#define int long long
using namespace std;
#define N 200005
vector<int>mp[30];
int n, m, p, ans, jl[N];
signed main() {
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	ios::sync_with_stdio (0);
	cin.tie (0), cout.tie (0);
	cin >> n >> m;
	for (int i = 1, x; i <= n; i++) {
		cin >> x;
		for (int j = 29; ~j; j--) if ( (x >> j) & 1) mp[j].emplace_back (i);
	}
	for (int i = 29, p = 0; ~i; i--) {
		p++;
		for (int j : mp[i]) jl[j]++;
		int res = 0;
		for (int j = 1; j <= n; j++) res += (jl[j] >= p);
		if (res >= m) ans |= (1 << i);
		else {
			p--;
			for (int j : mp[i]) jl[j]--;
		}
	}
	cout << ans << '\n';
	return 0;
}
/*
freopen ("travel.in", "r", stdin);
freopen ("travel.out", "w", stdout);
freopen ("travel.in", "r", stdin);
freopen ("travel.out", "w", stdout);
freopen ("travel.in", "r", stdin);
freopen ("travel.out", "w", stdout);
*/