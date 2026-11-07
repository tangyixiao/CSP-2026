#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	string sum = "";
	cin >> a >> b >> c >> d;
	if (a[0] == c[0] && a[1] == c[1]) {
		sum += "1";
		if (b[0] == d[0] && b[1] == d[1]) {
			sum += "1";
			if ((b[2] == 'A' || b[2] == 'B' || b[2] == 'C') && (d[2] == 'A' || d[2] == 'B' || d[2] == 'C') || (b[2] == 'D'
			        || b[2] == 'F') && (d[2] == 'D' || d[2] == 'F')) {
				sum += "1";
				if ((b[2] == 'A' && d[2] == 'B' || b[2] == 'B' && d[2] == 'A') || (b[2] == 'B' && d[2] == 'C' || b[2] == 'C'
				        && d[2] == 'B') || (b[2] == 'D' && d[2] == 'F' || b[2] == 'F' && d[2] == 'D')) {
					sum += "1";
				} else {
					sum += "0";
				}
			} else {
				sum += "00";
			}
		} else {
			sum += "000";
		}

	} else {
		sum += "0000";
	}
	cout << sum;
	return 0;
	//lyy
}
