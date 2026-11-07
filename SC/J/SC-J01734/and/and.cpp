#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, m, a[1000010], c[35], ans = pow(2, 30) - 1;
bool b[35][1000010];
void jz_2 (int x, int i) {
	int t = x;
	for (int j = 0; pow(2, j) <= x; j++) {
		if (t & 1) b[j][i] = 1, c[j]++;
		t >>= 1;
	}
}
int main () {
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		jz_2(a[i], i);
	}
	for (int i = 30; i >= 0; i--) {
		if (c[i] >= m) {
			for (int j = 1; j <= n; j++) {
				if (b[i][j]) {
					ans &= a[j];
					//cout << ans << " ";
				}
			}
			break;
		}
	}
	/*for (int i = 0; i <= 5; i++) {
		for (int j = 1;  j <= n; j++) {
			cout << b[i][j] << " ";
		}
		cout << "\n";
	}*/
	cout << ans;
	return 0;
}
/*
4 2
3 15 12 12
;12

5 3
31 3 1 15 7
;7
*/