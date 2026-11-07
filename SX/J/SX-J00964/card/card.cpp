#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
int a[500010], vis[300010], t[300010];
stack<int> st;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	ll f = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i - 1] > a[i])
			f = 1;
	}
	if (!f) {
		if (a[1] == a[2]) {
			cout << n << " ";
			for (int i = 2; i <= m; i++) {
				cout << "0 ";
			}
		} else {
			for (int i = 1; i <= m; i++) {
				cout << n << " ";
			}
		}
		return 0;
	}
	for (int j = 1; j <= n; j++) {
		memset(vis, 0, sizeof(vis));
		for (int i = j; i <= n; i++) {
			vis[a[i]]++;
			if (vis[a[i]] > 1) {
				while (!st.empty() && st.top() != a[i]) {
					vis[st.top()]--;
					st.pop();
				}
				vis[a[i]]--;
			} else
				st.push(a[i]);
		}
		while (!st.empty()) {
			t[st.top()]++;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++)
		cout << t[i] << " ";
	return 0;
}