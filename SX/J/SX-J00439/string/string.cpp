#include <bits/stdc++.h>
using namespace std;
long long a;
char s[100000005];
long long l;
long long ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		char j;
		cin >> a;
		cin >> j;
		for (long long k = l + 1; k <= l + a; k++) {
			s[k] = j;
		}
		l += a;
	}
	for (long long i = 1; i <= l / 2; i++) {
		if (s[i] != s[l - i + 1]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
