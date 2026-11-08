#include <bits/stdc++.h>
using namespace std;
const int N = 10;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string car[2], seat[2];
	cin >> car[0] >> seat[0] >> car[1] >> seat[1];
	if (car[0][0] == car[1][0] && car[0][1] == car[1][1]) cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	if (seat[0][0] == seat[1][0] && seat[0][1] == seat[1][1]) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if (((seat[0][2] == 'A' || seat[0][2] == 'B' || seat[0][2] == 'C') && (seat[1][2] == 'A' || seat[1][2] == 'B' || seat[1][2] == 'C')) || ((seat[0][2] == 'D' || seat[0][2] == 'F') && (seat[1][2] == 'D' || seat[1][2] == 'F'))) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	if (seat[0][2] + 1 == seat[1][2] || seat[0][2] - 1 == seat[1][2]) {
		cout << 1;
	} else {
		cout << 0;
		return 0;
	}
}
