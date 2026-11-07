#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], cmp;
char b[200005];
string s1, s2;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		for (long long j = 1; j <= a[i]; j++) {
			s1 = s1 + b[i];
		}
	}
	int t = 0;
	for (long long i = s1.size() - 1; i >= 0; i--) {
		s2[t] = s1[i];
		t++;
	}
	for (long long i = 0; i < s1.size(); i++) {
		if (s1[i] != s2[i]) {
			cmp++;
		}
	}
	cout << cmp / 2;
	return 0;
}