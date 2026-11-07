#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
const int M = 3e5+5;
int a[N];
bool vis[M];
int cnt[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		stack<int> st;
		for (int j = i; j <= n; j++) {
			if (!vis[a[j]]) {
				st.push(a[j]);
				vis[a[j]] = 1;
			} else {
				while (st.top() != a[j]) {
					vis[st.top()] = 0;
					st.pop();
				}
			}
		}
		while (!st.empty()) {
			int head = st.top();
			st.pop();
			cnt[head]++;
			vis[head] = 0;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << ' ';
	}
	return 0;

}