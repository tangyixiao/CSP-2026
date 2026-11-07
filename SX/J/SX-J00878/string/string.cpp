#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, l[N], mx = -1, sl, ans1, ans2;
string s, st;
char a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> l[i] >> a[i];
		sl += l[i];
	}
	if (sl >= 1e9) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= l[i]; j++) {
			s += a[i];
		}
	}
	for (int i = 0; i <= sl / 2 - 1; i++) {
		//cout << s[i] << "¡¡" << s[sl - i-1] << "\n";
		if (s[i] != s[sl - i - 1]) {
			s[sl - i - 1] = s[i];
			ans1++;
		}
	}
	cout << ans1;
	return 0;
}