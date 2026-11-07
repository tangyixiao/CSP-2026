#include <bits/stdc++.h>
using namespace std;
int h[200010];

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}
	sort(h + 1, h + n + 1, cmp);
	int cnt = 0, a = 1;
	for (int i = 1; i <= m; i++) {
		if (a == 2) {
			cnt = (h[i - 1] & h[i]);
		} else {
			cnt = (cnt &h[i]);
		}
		a++;
	}
	cout << cnt;
	return 0;
}