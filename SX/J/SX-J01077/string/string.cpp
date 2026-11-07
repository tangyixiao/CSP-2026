#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[100100];
char c[100100];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n <= 1) {
		cout << "0";
		return 0;
	} else if (n <= 2) {
		for (ll i = 1; i <= n; i++) {
			cin >> a[i] >> c[i];
		}
		if (a[1] == a[2]) {
			if (a[1] == 1) {
				cout << "1";
				return 0;
			} else {
				cout << "2";
				return 0;
			}
		} else {
			cout << "2";
			return 0;
		}
	}

	cout << "0";
	return 0;
}