#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, m, a[N], vis[N], ans[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) cin >> a[i];
	for (int k = 1; k <= n; k ++) {
		stack<int> st;
		memset(vis, 0, sizeof vis);
		st.push(a[k]);
		vis[a[k]] = 1;
		for (int i = k+1; i <= n; i ++) {
			if (vis[a[i]]) {
				while (st.top() != a[i] && !st.empty()) {
					vis[st.top()] = 0;
					st.pop();
				}
				vis[st.top()] = 0;
				st.pop();
			}
			vis[a[i]] = 1;
			st.push(a[i]);
		}
		for (int i = 1; i <= m; i ++) {
			if (vis[i]) ans[i] ++;
		}
	}
	for (int i = 1; i <= m; i ++) cout << ans[i] << " ";
	return 0;
}
