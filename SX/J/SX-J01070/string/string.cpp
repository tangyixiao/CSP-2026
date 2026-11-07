#include <bits/stdc++.h>
using namespace std;





int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	long long a[100010], n = 0, sum = 0, cnt = 0;
	string c;
	string s;

	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		cnt += a[i];
		for (int i = 1; i <= n / 2; i++) {
			if (c[i] != c[cnt + 1 - i]) {
				if (a[i] > c[i]) {
					s[i] += a[i];

				} else {
					s[i] += c[i];
				}

			}
		}

	}
	for (int i = 1; i <= n; i++) {
		if (sum + a[i] > cnt) {
			sum += a[i];

		}
	}


}
