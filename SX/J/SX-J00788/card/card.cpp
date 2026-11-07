#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10, M = 3e5+10;
int n, m;
int a[N];
stack<int> st;
bool f[M];
int ans[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;//4  3
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);//  1 2 1 3
	}
	for (int i = 1; i <= n; i++) {
		memset(f, false, sizeof(f));
		for (int j = i; j <= n; j++) {
			if (f[a[j]] == false) {
				st.push(a[j]);
				f[a[j]] = true;
			} else {
				while (st.top() != a[j]) {
					f[st.top()] = false;
					st.pop();
				}
			}
		}
		while (!st.empty()) {
			ans[st.top()]++;
			st.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		printf("%d ", ans[i]);
	}
	return 0;
}