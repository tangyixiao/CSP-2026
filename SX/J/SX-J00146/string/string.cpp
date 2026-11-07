#include <bits/stdc++.h>
using namespace std;
string s;
long long sum;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long a;
		char c;
		cin >> a >> c;
		for (long long j = 1; j <= a; j++) {
			s += c;
		}
	}
	long long t = s.size();
	long long x = t / 2;
	long long k = t;
	for (long long i = 0; i < x; i++) {
		k--;
		if (s[i] != s[k]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}

