#include <bits/stdc++.h>
using namespace std;
string s;
long long n, sum;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		long long a;
		char c;
		cin >> a >> c;
		for (long long i = 1; i <= a; i++) {
			s += c;
		}
	}
	long long l = s.size(), l1 = l / 2;
	for (long long i = 0; i < l1; i++) {
		if (s[i] != s[l - 1 - i])
			sum++;
	}
	cout << sum;
	return 0;
}
