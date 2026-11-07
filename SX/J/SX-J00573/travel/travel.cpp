#include <bits/stdc++.h>
using namespace std;
string R, r, sitr; //R³µÏá£¬×ùÎ»ºÅ,×ùÎ»×ÖÄ¸
string X, x, sitx; //X³µÏá£¬×ùÎ»ºÅ,×ùÎ»×ÖÄ¸
int numr, numx; //RÅÅºÅ£¬XÅÅºÅ

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> R >> r >> X >> x;
	if (R == X)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	for (int i = 0; i <= 1; i++) {
		numr += r[i];
	}
	sitr = r[2];
	for (int j = 0; j <= 1; j++) {
		numx += x[j];
	}
	sitx = x[2];
	if (numr == numx)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if (sitr == "A" or sitr == "B" or sitr ==  "C") {
		if (sitx == "A" or sitx == "B" or sitx  ==  "C") {
			cout << "1";
		} else {
			cout << "00";
			return 0;
		}
	}
	if (sitr == "D" or sitr ==  "F") {
		if (sitx == "D" or sitx ==  "F") {
			cout << "1";
		} else {
			cout << "00";
			return 0;
		}
	}
	if ((sitr == "A" and sitx == "B") or (sitx == "A" and sitr == "B")) {
		cout << "1";
		return 0;
	} else if ((sitr == "B" and sitx == "C") or (sitx == "B" and sitr == "C")) {
		cout << "1";
		return 0;
	} else if ((sitr == "D" and sitx == "F") or (sitx == "D" and sitr == "F")) {
		cout << "1";
		return 0;
	} else
		cout << 0;
	return 0;
}
