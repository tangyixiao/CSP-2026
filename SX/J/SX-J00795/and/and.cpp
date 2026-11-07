#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int bit = 29; bit >= 0; bit--) {
		int ca = ans | (1 << bit);
		int cnt = 0;
		for (int x : a) {
			if ((x & ca) == ca)
				cnt++;
		}
		if (cnt >= m)
			ans = ca;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
