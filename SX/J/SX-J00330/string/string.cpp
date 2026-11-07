#include <bits/stdc++.h>
using namespace std;
long long a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	string s, s1, s2, s3;
	cin >> n;
	long long sum;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> s[i];
		sum += a[i];
		for (int j = 1; j <= a[i]; j++) {
			s1 += s[i];
		}
	}
	int f = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[i - 1])
			f = 1;
	}
	if (f == 0) {
		cout << 0;
		return 0;
	}
	int ans = 0;
	long long l = sum / 2;
	for (int i = 0; i < l; i++) {
		s2 += s1[i];
	}
	for (int i = sum; i > l; i--) {
		s3 += s1[i];
	}
	for (int i = 0; i < l; i++) {
		if (s2[i] != s3[i])
			ans++;
	}
	cout << ans / n;
	return 0;
}
