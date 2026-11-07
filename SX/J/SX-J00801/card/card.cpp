#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[300010];
int k;
bool f[300010];
set<int> s;
int ans[300010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			f[i] = false;
		}
		for (int j = i; j <= n; j++) {
			if (f[a[j]] == false) {
				s.insert(a[j]);
				f[a[j]] = true;
				ans[a[j]]++;
			} else {
				s.erase(a[j]);
				f[a[j]] = false;
			}
		}
		int len = s.size();
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}