#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, shu, cnt, l;
string s, s1;
char zi;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> shu >> zi;
		while (shu--) {
			s = s + zi;
			l += shu;
		}
	}

	for (int i = 0; i < l; i++) {
		if (s[i] != s[i + 1]) {
			s[i + 1] = s[i];
			cnt++;
		}
	}
	cout << cnt;


	return 0;
}
