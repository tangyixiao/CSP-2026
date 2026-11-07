#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 5e5 + 5;

int n, m, a[N], res[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	
	for (int i = 1; i <= n; i++) {
		stack <int> st;
		bool f[N] = {};
		
		for (int j = i; j <= n; j++) {
			if (!f[a[j]]) {
				st.push(a[j]);
				f[a[j]] = true;
			}
			else {
				while (st.top() != a[j]) {
					f[st.top()] = false;
					st.pop();
				}
			}
		}
		while (!st.empty()) {
			res[st.top()]++;
			st.pop();
		}
	}
	
	for (int i = 1; i <= m; i++) {
		cout << res[i] << ' ';
	}
	
	return 0;
}