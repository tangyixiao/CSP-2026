#include <bits/stdc++.h>
using namespace std;
int n, m, kid;
map<int, int> m1;
int ans[500010];
int a[500010];
bool ff = true;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i - 1] > a[i]) {
			ff = false;
		}
		m1[a[i]]++;
	}
	if (ff == true) {
		for (int i = 1; i <= m; i++) {
			cout << m1[i] << " ";
		}
		return 0;
	}
	m1.clear();

	return 0;
}