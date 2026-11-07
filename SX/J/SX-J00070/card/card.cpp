#include <bits/stdc++.h>
using namespace std;
int t[1000];
int n, m, a[10005], book[10005];
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
			if (book[a[j]] == 0) {
				book[a[j]] = 1;
				st.push(a[j]);
			} else {
				while (!st.empty() and st.top() != a[j]) {
					book[st.top()] = 0;
					st.pop();
				}
			}
		}
		while (!st.empty()) {
			t[st.top()]++;
			book[st.top()] = 0;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << t[i] << ' ';
	}

	return 0;
}
