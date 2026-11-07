#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[100000100], z, cnt, ans;
char b[200100];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		cnt += a[i];
	}
	z = 0;
	cnt = 0;
	ans = 0;
	for (int i = 1; i <= n; i++) {
		if (n == 1) {
			cout << 0;
		} else if (n == 2) {
			if (b[i] != b[i + 1]) {
				if (a[i] > a[i + 1]) {
					z = a[i + 1];
					cout << z;
					break;
				} else {
					z = a[i];
					cout << z;
					break;
				}
			} else {
				cout << 0;
				break;
			}


		} else  {
			if (b[i] != b[i + 1]) {
				ans = cnt / 2;
				cout << ans;
				break;
			} else {
				cout << 0;
				break;
			}

		}

	}
	return 0;
}
