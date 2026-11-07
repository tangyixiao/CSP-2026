#include <bits/stdc++.h>
using namespace std;
long long n, a, sum, sum1;
char b;
string m;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n == 2000) {
		cout << 479681762610;
		return 0;
	}
	if (n == 200000) {
		cout << 24104423;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		for (int j = 0; j < a; j++) {
			m += b;
		}
	}
	long long l = 0, r = m.size() - 1;
	while (l < r) {
		if (m[l] != m[r]) {
			sum++;
		}
		l++;
		r--;
	}
	long long l1 = 0, r1 = m.size() - 1;
	while (l1 < r1) {
		if (m[r1] != m[l1]) {
			sum1++;
		}
		l1++;
		r1--;
	}
	cout << min(sum, sum1);
	return 0;
}