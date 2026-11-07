#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long sl = 0;
	string s;
	for (int i = 1; i <= n; i ++) {
		int a;
		cin >> a;
		char c;
		cin >> c;
		sl += a;
		for (int j = 1; j <= a; j ++) {
			s += c;
		}
	}
	s = " " + s;
	int ct = 0;
	for (int i = 1, j = sl; i <= sl / 2; i ++, j --) {
		if (s[i] != s[j])
			ct ++;
	}
	cout << ct;

	return 0;

}
//OwO¼ÓÓÍ£¡£¡