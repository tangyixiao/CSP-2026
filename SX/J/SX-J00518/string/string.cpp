#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, l = 0, ans = 0;
string s1 = "";
bool ff = 1;
char sg = '0';
const int N = 2e5+5;
int a[N];
char c[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		l += a[i];
		if (sg != '0' and c[i] != sg) {
			ff = 0;
		}
		sg = c[i];
	}

	if (ff) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			s1 += c[i];
		}
	}
//	cout << '1';
	s1 = '.' + s1;
	int mid = l / 2;
	for (int i = 1; i <= mid; i++) {
		if (s1[i] != s1[l + 1 - i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
