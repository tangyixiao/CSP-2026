#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
int n, m, a[N], ans[N];
bool f[N];
stack<int> st;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= m; i++)
			f[i] = 0;
		for (int i = k; i <= n; i++) {
			if (f[a[i]])
				while (st.top() != a[i]) {
					f[st.top()] = 0;
					st.pop();
				} else {
				f[a[i]] = 1;
				st.push(a[i]);
			}
		}
		for (int i = 1; i <= m; i++)
			if (f[i])
				ans[i]++;
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}