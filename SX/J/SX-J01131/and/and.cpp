#include <bits/stdc++.h>
using namespace std;
int a[32];

struct str {
	int a, e[31] = {};
} s[200008];

int jinzh(int i ) {
	int n = s[i].a;
	int j = 0;
	while (n > 0) {
		s[i].e[j ++] = n % 2;
		n /= 2;
	}
	a[j]++;
	return 0;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) {
		cin >> s[i].a;
		jinzh(i);
	}
	for (int i = 31; i >= 0; i ++) {
		if (a[i] >= m ) {
			long long l = pow(2, i);
			cout << l;
			break;
		}
	}
	return 0;
}