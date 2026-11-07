#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long d = 0, s, cnt = 0;
	int n, a[300000], t = 1;
	char b[300000];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 1; i < n; i++) {
		if (b[i] != b[i + 1])
			break;
		else {
			t++;
		}
	}
	if (t == n) {
		cout << "0";
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		if (max(a[i], a[i + 1]) > s) {
			s = max(a[i], a[i + 1]);
		}
	}
	for (int i = 1; i <= n; i++) {
		d = a[i] + d;
	}
	s = s * t;
	cnt = d - s;
	//cout << d << " " << s << " " << t;
	cout << cnt;
	return 0;
}
