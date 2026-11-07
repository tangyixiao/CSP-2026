#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b, c, d;
	string pai, erpai;
	cin >> a >> b >> pai >> c >> d >> erpai;
	if (a == c) {
		cout << "1";
		if (b == d) {
			cout << "1";
			if ((pai >= "A" && pai <= "C" && erpai >= "A" && erpai <= "C") || ((pai == "D" && erpai == "F") || (pai == "F"
			        && erpai == "D"))) {
				cout << "1";
				if ((pai == "D" && erpai == "F") || (pai == "F"
				                                     && erpai == "D") || (pai == "A" && erpai == "B") || (pai == "B"
				                                             && erpai == "A") || (pai == "B" && erpai == "C") || (pai == "C"
				                                                     && erpai == "B")) {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
