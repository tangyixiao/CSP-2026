#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int n, a[200005], cnt, ctt, cnn;
string s, c[200005];

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		//ctt += a[i];
	}
//	for (int i = 1; i <= n; i++) {
//		cnn += a[i];
//		if (cnn >= ctt / 2 + 1) {
//			cout << ctt - cnn;
//			return 0;
//		}
//	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			s += c[i];
		}
	}
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - 1 - i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}