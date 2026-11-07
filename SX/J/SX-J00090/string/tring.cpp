#include <bits/stdc++.h>
using namespace std;
string s;
char sss;

int n, a, tong[30], minn = 1000000, maxx, m;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a >> sss;
		s = s + sss;
		tong[char(sss) - 'a']++;
	}
	for (int i = 0; i <= 30; i++) {

		if (tong[i] != 0) {
			if (minn > tong[i]) {
				minn = tong[i];
			}
			if (maxx < tong[i]) {
				maxx = tong[i];
			}
			m++;
		}
	}
	if (minn == maxx) {
		cout << 0;
	}
	int len = s.size();
	for (int i = 0; i < len; i++) {

		if (s[i] == s[len - i]) {
			int sed = s[i + 1];
			s[i + 1] = s[len - i];
			s[len - i] = sed;
		}
	}
	cout << s;
	return 0;
}