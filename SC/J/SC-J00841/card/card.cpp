#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 5e5+5, INF = 1e9;
int n, m;
int a[N], tot[N], last[N], g[N], fa[N];
void pushup(int i, int add) {
	tot[i] += add;
	if (fa[i] != 0) {
		pushup(fa[i], add);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		tot[a[i]]++;
		g[a[i]]++;
		last[a[i]] = i;
	}
	for (int i = 1; i <= m; i++) {
		fa[i] = a[last[i] + 1];
	}
	for (int i = 1; i <= m; i++) {
		pushup(fa[i], g[i]);
	}
	for (int i = 1; i <= m; i++) {
		cout << tot[i] << " ";
	}
	return 0;
}