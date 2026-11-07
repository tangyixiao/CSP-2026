#include <bits/stdc++.h>
using namespace std;
int n, a, len = 0, sum = 0;
string s, q;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> q[i];
		for (int j = len; j <= len + a; j++) {
			s[j] = q[i];
		}
		len += a;
	}

	for (int i = 1; i <= n; i++) {
		if (s[i] != s[len]) {
			sum++;
		}
		len--;
	}
	cout << sum;
	return 0;
}


