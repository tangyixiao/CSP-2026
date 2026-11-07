#include <bits/stdc++.h>
using namespace std;
long long a[200090];
string c[200090];
long long ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	string s;
	for (long long i = 1; i <= n; i++) {
		for (long long j = a[i]; j >= 1; j--) {
			s += c[i];
		}
	}
	long long l = s.size();
	string s1, s2;
	if (l % 2 == 0) {
		for (long long i = 0; i < l / 2; i++) {
			s1 += s[i];
		}
		for (long long i = l / 2; i < l; i++) {
			s2 += s[i];
		}
		for (long long i = 0; i < l / 2; l++) {
			if (s1[i] != s2[i]) {
				ans++;
			}
		}
		cout << ans;
		return 0;
	}
	if (l % 2 != 0) {
		for (long long i = 0; i < l / 2; i++) {
			s1 += s[i];
		}
		for (long long i = l / 2 + 1; i < l; i++) {
			s2 += s[i];
		}
		for (long long i = 0; i < l / 2; i++) {
			if (s1[i] != s2[i]) {
				ans++;
			}
		}
		cout << ans;
		return 0;
	}
	return 0;
}
/*3
2 a
2 b
1 c*/
