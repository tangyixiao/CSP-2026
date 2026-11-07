#include <bits/stdc++.h>
using namespace std;

char s[100000000] = {};
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, x, k = 0, p = 0;
	char a;
	cin >> n;
	if (n <= 1) {
		cout << "0";
		return 0;
	}
	long long h = 0;
	for (int i = 0; i < n; i++) {
		cin >> x >> a;
		for (int j = 1; j <= x; j++) {
			s[h] = a;
			h++;
			if (x > k) {
				k = x;
			}
		}
	}
	for (int i = 0; i <= h / 2; i++) {
		for (int j = h - i - 1; j >= h / 2 ; j--) {
			if (s[i] != s[j]) {
				p++;
				break;
			}
		}
	}
	cout << p;
	return 0;
}
