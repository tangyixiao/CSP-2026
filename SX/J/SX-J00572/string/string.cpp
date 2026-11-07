#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	long long a[n];
	char b[n];
	cin >> n;
	string s;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		for (long long j = 0; j < a[i]; j++) {
			s += b[i];
		}
	}
	int x = 0;
	string s1, s3;
	for (long long j = 0; j < s.size() / 2; j++) {
		s1 += s[j];
	}

	for (long long j = s.size() / 2 + 1; j < s.size(); j++) {
		s3 += s[j];
	}
	if (s1 == s3) {
		cout << 0;
		return 0;

	} else {
		for (long long j = 0; j < s.size() / 2; j++) {
			if (s1[j] != s3[s.size() - j]) {
				x++;
			}
		}
	}
	cout << x;
}
