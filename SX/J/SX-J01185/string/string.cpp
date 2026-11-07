#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], cnt1 = 0, cnt2 = 0;
string c[200005], s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int x = 1; x <= n; x++) {
		for (int j = 1; j <= a[x]; j++) {
			s = s + c[x];
			cnt1++;
		}
	}
	for (int i = 0; i <= cnt1 / 2; i++) {
		if (s[i] != s[cnt1 - 1 - i]) {
			s[cnt1 - 1 - i] = s[i];
			cnt2++;
		}
	}
	cout << cnt2;
	return 0;
}
