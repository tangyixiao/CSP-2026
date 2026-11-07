#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, m;
ll a[200010];
ll ansq = -1;
void dfs(int z, ll ans) {
	stable_sort(a + 1, a + n + 1, greater<ll>());
	if (z == m) {
		ansq = max(ans, ansq);
		return;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (a[j] == 0 || a[i] == 0 || i == j)continue;
			ll o = a[i], p = a[j];
			a[i] = (o&p);
			a[j] = 0;
			dfs(z + 1, a[i]);
			a[i] = o, a[j] = p;
		}
	}

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)cin >> a[i];
	stable_sort(a + 1, a + n + 1, greater<ll>());
	if (m == 1) {
		cout <<a[1];
		return 0;
	}
	dfs(1, 0);
	cout << ansq;
	return 0;
}
//5 3 31 3 1 15 7