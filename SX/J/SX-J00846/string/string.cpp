#include <bits/stdc++.h>
using namespace std;
int cnt = 1, sum, n, a[100000], ccnt;
bool f = 0, ff = 0;
char c[100010], d[100010];

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sum += a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] == c[i + 1]) {
			f = 1;
		} else {
			f = 0;
			break;
		}
	}
	if (f = 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		if (i <= a[cnt]) {
			d[i] == c[cnt];
		} else {
			cnt++;
			d[i] == c[cnt];
		}
	}
	cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (d[1 + cnt] != d[sum - cnt]) {
			ccnt++;
		}
		cnt++;
	}
	cout << ccnt;
	return 0;
}
