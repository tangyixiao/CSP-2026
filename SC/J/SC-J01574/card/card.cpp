#include<bits/stdc++.h>
using namespace std;
int n, m, a[500005], sum[300005];
bool cnt[300005];
stack<int> st;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (cnt[a[j]] == 1) {
				while (st.top() != a[j]) {
					cnt[st.top()] = 0;
					st.pop();
				}
				st.pop();
			}
			st.push(a[j]);
			cnt[a[j]] = 1;
		}
		while (st.size()) {
			cnt[st.top()] = 0;
			sum[st.top()]++;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << ' ';
	}
	return 0;
}