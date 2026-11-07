#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long a[n];
	char c[n];
	string s;
	for (int i=0; i<n; i++) {
		cin >> a[i] >> c[i];
		for (long long j=0; j<a[i]; j++) {
			s += c[i];
		}
	}
	int ans = 0;
	for (long long i=0; i<s.length()/2; i++) {
		if (s[i] != s[s.length()-i-1]) {
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}
