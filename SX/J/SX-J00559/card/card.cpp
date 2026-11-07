#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5+5;
int n, m, a[N], vis[N], cnt[N];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		stack<int> st;
		for (int j = i; j <= n; j++) {
			st.push(a[j]);
			vis[a[j]]++;
			if (vis[a[j]] > 1) {
				while (st.size()) {
					if (st.top() == a[j] && vis[st.top()] == 1)
						break;
					vis[st.top()]--;
					st.pop();
				}
			}
		}
		while (st.size()) {
			cnt[st.top()]++;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}