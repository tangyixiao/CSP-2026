#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500005];
stack<int> st;
bool vis[300005];
int b[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int an = n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= an; j++) {
			if (vis[a[j]]) {
				while (st.top() != a[j]) {

					st.pop();
				}
			}
			st.push(a[j]);
			vis[a[j]] = true;
		}
		for (int i = 1; i <= st.size(); i++) {
			b[st.top()]++;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i];
	}
	return 0;
}