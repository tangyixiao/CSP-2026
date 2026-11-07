#include <bits/stdc++.h>
using namespace std;
string a1, a2, a3, a4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> a2 >> a3 >> a4;
	if (a1 == a3 && a2[0] == a4[0] && a2[1] == a4[1] && a2[2] == 'C' && a4[2] == 'D') {
		cout << "1100";
	} else if (a1 == a3 && a2[0] == a4[0] && a2[1] == a4[1] && a2[2] == 'A' && a4[2] == 'B') {
		cout << "1111";
	} else if (a1 == a3 && a2[0] == a4[0] && a2[1] == a4[1] && a2[2] == 'B' && a4[2] == 'C') {
		cout << "1111";
	} else if (a1 == a3 && a2[0] == a4[0] && a2[1] == a4[1] && a2[2] == 'C' && a4[2] == 'B') {
		cout << "1111";
	} else if (a1 == a3 && a2[0] == a4[0] && a2[1] == a4[1] && a2[2] == 'B' && a4[2] == 'A') {
		cout << "1111";
	} else if (a1 == a3 && a2[0] == a4[0] && a2[1] == a4[1] && a2[2] == 'D' && a4[2] == 'F') {
		cout << "1111";
	} else if (a1 == a3 && a2[0] == a4[0] && a2[1] == a4[1] && a2[2] == 'F' && a4[2] == 'D') {
		cout << "1111";
	} else if (a1 == a3 && a2[0] != a4[0] && a2[1] == a4[1]) {
		cout << "1000";
	}

	else if (a1 == a3 && a2[0] == a4[0] && a2[1] != a4[1]) {
		cout << "1000";
	} else if (a1 == a3 && a2[0] != a4[0] && a2[1] != a4[1]) {
		cout << "1000";
	} else if (a1 != a3 && a2[0] == a4[0] && a2[1] == a4[1]) {
		cout << "0000";
	}

	else if (a1 != a3 && a2[0] != a4[0] && a2[1] == a4[1]) {
		cout << "0000";
	} else if (a1 != a3 && a2[0] == a4[0] && a2[1] != a4[1]) {
		cout << "0000";
	} else if (a1 != a3 && a2[0] != a4[0] && a2[1] != a4[1]) {
		cout << "0000";
	} else {
		cout << "1110";
	}
	return 0;
}
