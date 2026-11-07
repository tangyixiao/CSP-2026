#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n, a[N], len, ans;
char c[N], rc;
string s;
bool flag = 1;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	s = ' ' + s;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		if (c[i] != rc)
			flag = 0;
		rc = c[i];
	}
	if (flag == 1) {
		cout << 0;
		return 0;
	}
	for (long long i = 1; i <= n; i++) {
		for (long long j = 1; j <= a[i]; j++) {
			s = s + c[i];
			len++;
		}
	}
	long long l = 1, r = len;
	for (; l <= r; l++, r--) {
		if (s[l] != s[r])
			ans++;
	}
	cout << ans;
	return 0;
}