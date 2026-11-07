#include <bits/stdc++.h>
using namespace std;
long long n, sum, a[1000000005];
string b[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n ;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	if (n % 2 != 0) {
		for (int i = 1; i <= n / 2; i++) {
			for (int j = n; j > n / 2 + 1; j++) {
				if (b[i] == b[j]) {
					sum += a[i];
				}
			}
		}
	}
	if (n % 2 == 0) {
		for (int i = 1; i <= n / 2; i++) {
			for (int j = n; j >= n / 2 + 1; j++) {
				if (b[i] == b[j]) {
					sum += a[i];
				}
			}
		}
	}
	cout << sum;
	return 0;
}
