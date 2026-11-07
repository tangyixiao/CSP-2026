#include <bits/stdc++.h>
using namespace std;
string ca, cb, sa, sb, cz, sz, cp, sp;

int pd() {
	if (cz == "A" && sz == "B")
		return 2;
	if (cz == "A" && sz == "C")
		return 1;
	if (cz == "B" && sz == "A")
		return 2;
	if (cz == "B" && sz == "C")
		return 2;
	if (cz == "C" && sz == "A")
		return 1;
	if (cz == "C" && sz == "B")
		return 2;
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> ca >> cb >> sa >> sb;
	cz = cb[cb.size() - 1];
	sz = sb[sb.size() - 1];
	cp = cb;
	cp.erase(cp.begin() + (cp.size() - 1));
	sp = sb;
	sp.erase(sp.begin() + (sp.size() - 1));
	if (ca == sa) {
		cout << "1";
		if (cp == sp) {
			cout << "1";
			if ((cz == "D" && sz == "F") || (cz == "D" && sz == "F") || pd()) {
				cout << "1";
				if ((cz == "D" && sz == "F") || (cz == "D" && sz == "F") || pd() > 1)
					cout << "1";
				else
					cout << "0";
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}
