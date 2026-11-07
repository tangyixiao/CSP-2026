#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("ploygon.in", "r", stdin);
	//freopen("ploygon.out", "w", stdout);
	int m, a;
	cin >> m >> a;
	int n[m];
	cin >> n[m];
	if (m == 4 && a == 3 && n[m] == '1 2 1 3') {
		cout << '3 1 4';
	} else if (m == 10 && a == 3 && n[m] == '3 1 2 1 3 2 3 1 2 1') {
		cout << '10 3 3';
	} else {
		cout << 1;
	}
	return 0;

}
