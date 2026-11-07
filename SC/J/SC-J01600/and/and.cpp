#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, a[N], m, b[N], mx = 0;
void dfs(int now, int k) {
	if(now > m) {
		int l = b[1];
		for(int i = 2; i <= m; ++i) {
			l = (l & b[i]);
		}
		mx = max(mx, l);
		return ;
	}
	for(int i = k; i <= n - m + now; ++i) {
		b[now] = a[i];
		dfs(now + 1, i + 1);
		b[now] = 0;
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	dfs(1, 1);
	cout << mx;
	return 0;
}