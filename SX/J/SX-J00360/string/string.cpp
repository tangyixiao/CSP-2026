#include <bits/stdc++.h>
using namespace std;
char s[1000000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long l = 1, n;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		long long a;
		char c;
		cin >> a >> c;
		for (long long j = 1; j <= a; j++) {
			s[l] = c;
			l++;
		}
	}
	long long sum = 0;
	for (long long i = 1; i <= l / 2; i++) {
		if (s[i] != s[l - i]) {
			sum++;
		}
	}
	cout << sum ;
	return 0;
}