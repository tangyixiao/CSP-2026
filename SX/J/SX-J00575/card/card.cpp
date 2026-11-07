#include <bits/stdc++.h>
using namespace std;

int n, m, a[500005], ans[500005];
bool has[500005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card5.in", "r", stdin);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int i = 1; i <= n; i++) {
		stack<int> sta;
		for (int j = i; j <= n; j++) {
			if (!has[a[j]]) {
				has[a[j]] = 1;
				sta.push(a[j]);
			}

			else {
				while (!sta.empty()) {
					has[sta.top()] = 0;
					if (sta.top() == a[j]) {
						sta.pop();
						break;
					}

					sta.pop();
				}

				sta.push(a[j]);
				has[a[j]] = 1;
			}
		}

		while (!sta.empty()) {
			ans[sta.top()]++;
			has[sta.top()] = 0;
			sta.pop();
		}

	}

	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}
