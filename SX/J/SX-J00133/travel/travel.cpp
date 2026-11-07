#include <bits/stdc++.h>
using namespace std;
string a, b, a1, b1, as, as1, bs, bs1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> a1 >> b >> b1;
	for (int i = 0; i < a1.size(); i++) {
		if (a1[i] >= '0' && a1[i] <= '9')
			as += a1[i];
		else
			as1 += a1[i];
	}
	for (int i = 0; i < b1.size(); i++) {
		if (b1[i] >= '0' && b1[i] <= '9')
			bs += b1[i];
		else
			bs1 += b1[i];
	}
	if (a == b) {
		cout << 1;
		if (as == bs) {
			cout << 1;
			if (as1 == "A" || as1 == "B" || as1 == "C" && bs1 == "A" || bs1 == "B" || bs1 == "C") {
				cout << 1;
				if (as1 == "A" && bs1 == "B" || as1 == "B" && bs1 == "A" || as1 == "B" && bs1 == "C" || as1 == "C" && bs1 == "B")
					cout << 1;
				else
					cout << 0;
			} else if (as1 == "F" || as1 == "D" && bs1 == "F" || bs1 == "D") {
				cout << 1;
				if (as1 == "F" && bs1 == "D" || as1 == "D" && bs1 == "F")
					cout << 1;
				else
					cout << 0;
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}
