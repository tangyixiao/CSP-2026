#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, a[200010], b[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n == 1) {
		cout << 0;
	} else if (n == 2) {
		cin >> n;
		for (ll i = 1; i <= n ; i++) {
			cin >> a[i] >> b[i];
		}
		if (b[1] == b[2]) {
			cout << 0;
		} else {
			cout << min(a[1], a[2]);
		}
	}

}
//3
//2 a
//2 b
//1 c