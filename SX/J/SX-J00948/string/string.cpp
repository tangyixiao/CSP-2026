#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, l, a[N], ans = 0;
char as;
string s = "";

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> as;
		for (int j = 1; j <= a[i]; j++)
			s = s + as;
	}
	l = s.size() - 1;
	for (int i = 0; i <= l; i++) {
		if (s[i] != s[l - i + 1])
			ans++;
	}
	cout << ans - 1;
	return 0;
}