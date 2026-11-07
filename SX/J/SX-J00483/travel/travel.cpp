#include <bits/stdc++.h>
using namespace std;
long long  len;
string a, b, c, d;

int main() {
	freopen("travel", "r", stdin);
	freopen("travel", "w", stdout);
	cin >> a >> b >> c >> d ;
	len = a.size();
	len = b.size();
	len = c.size();
	len = d.size();
	if (a == c && b == d) {
		cout << 1110;
	}
	for (int i = 0; i <= len - 1; i++) {
		if ( a[i] == c[i] ) {
			cout << 1;
		} else {
			cout << 0;
			break;
		}
	}
	for (int i = 0; i <= len - 1; i++) {
		if (b[2] == d[2]) {
			cout << 1 ;
		} else {
			cout << 0;
			break;


		}
		if (b[3] == d[3] ) {
			cout << 1;
		} else {
			cout << 0;

		}
		if (b[3] == 'A' && d[3] == 'B' ) {
			cout << 1;
		} else {
			cout << 0;

		}
	}


	return 0;
}
