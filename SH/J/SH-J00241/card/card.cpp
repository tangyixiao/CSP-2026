#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
ll n, m;
ll a[500009], ans[300009];
bool vst[300009], vis[300009];
ll nxt[500009], l[500009];
vector<ll> now;
int main() {
	 freopen("card.in", "r", stdin);
	 freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		nxt[l[a[i]]] = i;
		l[a[i]] = i;
	}
	for (int i = n; i >= 1; i--) {
		if (vst[a[i]]) {
			while (!now.empty() && now.back() != a[i]) {
				vst[now.back()] = false;
				ans[now.back()] -= i;
				now.pop_back();
			}
		} else {
			vst[a[i]] = true, ans[a[i]] += i;
			now.emplace_back(a[i]);
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	// 10:08 ~
	return 0;
}
