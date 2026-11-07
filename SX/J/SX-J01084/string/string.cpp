#include <bits/stdc++.h>
using namespace std;
long long a[200100];
char b[200100];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, ll = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 1; i <= ceil(n / 2); i++) {
		for (int j = n; j >= ceil(n / 2); j--) {
			if (a[i] >= a[j] && b[i] != b[j] && a[j] != 0) {
				a[i] = a[i] - a[j];
				ll += a[j];
				a[j] = 0;
				b[j] = a[i];
				if (a[i] == 0)
					break;
			}
			if (a[i] <= a[j] && b[i] != b[j] && a[i] != 0) {

				a[j] = a[j] - a[i];
				ll += a[i];
				a[i] = 0;
				b[i] = b[j];
				if (a[j] == 0)
					break;
			}
		}
	}
	cout << ll;
	return 0;
}
