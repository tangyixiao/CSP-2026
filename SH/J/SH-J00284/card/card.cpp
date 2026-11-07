#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[500010], ans[500010];
bool mp[500010];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	bool flagA = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] < a[i - 1]) {
			flagA = 0;
			break;
		}
	}
	if (flagA == 1) {
		for (int i = 1; i <= n; i++) {
			if (a[i] != a[i + 1]) {
				ans[a[i]] = i;
			}
		}
		for (int i = 1; i <= m; i++) {
			cout << ans[i] << " ";
		}
	} else if (m == 2) {
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] != a[n]) {
				sum++;
			}
		}	
		cout << sum << " " << n;
	} else {
		for (int i = 1; i <= n; i++) {
			stack <int> stk;
			for (int j = i; j <= n; j++) {
				if (mp[a[j]] == 1) {
					while (!stk.empty()) {
						if (stk.top() == a[j]) {
							stk.pop();
							break;
						}
						mp[stk.top()] = 0;
						stk.pop();
					}
				} else {
					mp[a[j]] = 1;
				}
				stk.push(a[j]);
			}
			while (!stk.empty()) {
				ans[stk.top()]++;
				stk.pop();
			}
			memset(mp, 0, sizeof(mp));
		}
		for (int i = 1; i <= m; i++) {
			cout << ans[i] << " ";
		}
	}
	return 0;
}
