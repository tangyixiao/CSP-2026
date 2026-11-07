#include <bits/stdc++.h>
using namespace std;
long long a[200001];
string s[200001];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	long long ans = 0;
	long long num = 1;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> a[i] >> s[i];
	}
	long long m = n / 2;
	for (long long i = 0; i < m; i++) {
		if (s[i] != s[n - num]) {
			ans += a[i];
		}
		num++;
	}
	cout << ans;
	return 0;
}
