#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005];
bool fl[300005];
int ans[300005];
stack<int> S;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	for (int i = 1; i <= m; i++) {
		ans[i] = 0;
	}
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		S.empty();
		for (int i = 1; i <= m; i++) {
			fl[i] = 0;
		}
		for (int j = i; j <= n; j++) {
			if (fl[a[j]] == 1) {
				while (S.top() != a[j]) {
					S.pop();
				}
			}
			S.push(a[j]);
			fl[a[j]] = 1;
		}
		for (int i = 1; i <= S.size(); i++) {
			ans[S.top()]++;
			S.pop();
		}
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << ' ';
	return 0;
}
