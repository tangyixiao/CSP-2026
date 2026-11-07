#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, m, l, sum = 0;
	cin >> n;
	string s1, s2, c;
	for (int i = 1; i <= n; i++) {
		cin >> m >> c;
		l += m;
		for (long long j = 1; j <= m; j++) {
			s1 = s1 + c;
		}
	}

	for (int j = l - 1; j >= 0; j--) {
		s2 = s2 + s1[j];
	}

	for (int i = 0; i <= l / 2; i++) {
		if (s1 == s2) {
			break;
		}
		if (s1[i] != s2[i]) {
			sum += 1;
		}
	}
	cout << sum;


	return 0;
}


