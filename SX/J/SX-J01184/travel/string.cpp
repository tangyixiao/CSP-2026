#include <bits/stdc++.h>
using  namespace std;
int num, ans, dy;

struct node {
	int n;
	string s;
} a[20010];
string csp;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", strout);
	cin >> num;
	for (int i = 0; i <= num; i++) {
		cin >> a[i].n >> a[i].s;
	}
	for (int i = 0; i <= num; i++) {
		for (int j = 0; j <= a[i].n; j++) {
			csp[dy] += a[i].s;
			dy++;
		}
	}
	if (csp.size() % 2 == 0) {
		for (int i = 0; i <= num / 2; i++) {
			if (csp[i] != a[csp.size() - i + 1]) {
				ans++;
			}
		}
	} else {
		for (int i = 0; i <= num / 2; i++) {
			if (csp[i] != a[csp.size() - i + 1]) {
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}