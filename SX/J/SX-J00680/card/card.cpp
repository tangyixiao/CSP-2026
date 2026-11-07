#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500009];
map<int, int>b;
map<int, int>ans;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int>s;
	for (int i = 1; i <= n; i++) {
		for (int k = 0; k < n; k++) {
			for (int j = 0; j <= k; j++) {
				if (!b[a[j]])
					s.push_back(a[j]), b[a[j]] = i;
				else {
					if (j == b[a[j]] + 1) {
						continue;
					} else {
						vector<int>::iterator it = s.begin();
						for (int h = 1; h <= b[a[j]]; h++) {
							it++;
						}
						it--;
						for (; it != s.end();) {
							b[*it] = 0;
							s.erase(it);
						}
					}
				}
			}
		}
		for (int j = 1; j <= m; j++) {
			ans[j] += (b[j] != 0);
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}