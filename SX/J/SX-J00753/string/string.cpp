#include <bits/stdc++.h>
using namespace std;

struct str {
	long long x;
	char c;
} s[300001];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i].x >> s[i].c;
	}
	long long sum = 0, m = n / 2, p = 2;
	if (n % 2 == 0)
		p = 1;
	for (int i = m, j = m + p; i >= 1 && j <= n; i--, j++) {
		if (s[i].c == s[j].c) {
			if (s[m].x - abs(s[j].x - s[i].x) > 0)
				s[m].x -= abs(s[j].x - s[i].x);
			sum += abs(s[j].x - s[i].x);
		} else {
			sum += abs(s[j].x - s[i].x) + min(s[i].x, s[j].x);
		}
	}
	cout << sum;
	return 0;
}
