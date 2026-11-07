#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 3e5 + 5;
int n, m, ans[N];
stack<int> st;
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	vector<int> a(n + 5, 0);
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		while (st.size()) st.pop();
		vector<int> use(m + 5, false);
		for (int j = i; j <= n; j++) {
			if (use[a[j]] == 0) {
				st.push(a[j]);
				use[a[j]] = st.size();
			} else {
				while ((int)st.size() > use[a[j]]) {
					use[st.top()] = 0;
					st.pop();
				}
				if (st.size()) st.pop();
				st.push(a[j]);
				use[a[j]] = st.size();
			}
		}
		while (st.size()) {
			ans[st.top()]++;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << ' ';
	return 0;
}