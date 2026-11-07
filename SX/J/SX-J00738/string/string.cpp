#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	long long n, sum = 0;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		long long a;
		char kp;
		cin >> a >> kp;
		for (long long j = 1; j <= a; j++) {
			s += kp;
		}
	}
	long long p = s.size();
	long long kd = p / 2;
	if (p % 2 == 0) {
		for (long long i = 0; i < kd; i++) {
			if (s[i] == s[p - i]) {
				continue;
			} else {
				sum++;
			}
		}
	} else {
		for (long long i = 0; i < kd ; i++) {
			if (s[i] == s[p - i - 1]) {
				continue;
			} else {
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}

