#include <bits/stdc++.h>
using namespace std;
string s, a, b;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	while (n--) {
		long long x;
		cin >> x;
		char c;
		cin >> c;
		for (long long i = 1; i <= x; i++) {
			s = s + c;
		}
	}
	b = s;
	long long sum = 0;
	reverse(b.begin(), b.end());
	if (b == s)
		cout << sum;
	else {
		long long num = 0;
		b = s;
		for (long long i = 0; i < b.size() / 2 + 1; i++) {
			num++;
			if (b[i] != b[b.size() - num]) {
				b[b.size() - num] = b[i];
				sum++;
			}
		}
		cout << sum;
	}
	return 0;
}
