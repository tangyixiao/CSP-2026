#include <bits/stdc++.h>
using namespace std;
#define long long ll;
char a[1000001], b[1000001], k, w;
string a1, a0, b1, b0, sum, lp, qx;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> a0 >> b1 >> b0;
	if (a1 == b1)
		sum += '1';
	else {
		cout << "0000";
		return 0;
	}
	int x = a0.size();
	for (int i = 0; i < x; i++) {
		a[i] = a0[i];
		b[i] = b0[i];
	}
	lp += a[0];
	lp += a[1];
	qx += b[0];
	qx += b[1];
	if (lp == qx) {
		sum += '1';
		if ((a[2] <= 'C' && b[2] <= 'C') || (a[2] > 'C' && b[2] > 'C')) {
			sum += '1';
			a[2]++;
			k = a[2];
			a[2] -= 2;
			w = a[2];
			if ((char)(k) == b[2] || (char)(w) == b[2]) {
				sum += '1';
			} else {
				cout << "1110";
				return 0;
			}
		} else {
			cout << "1100";
			return 0;
		}
	} else {
		cout << "1000";
		return 0;
	}
	cout << sum;
	return 0;
}
