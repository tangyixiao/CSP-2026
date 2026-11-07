#include <bits/stdc++.h>
#define int long long
using namespace std;

int a, b;
char car1[3], car2[3];

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> car1;
	cin >> b >> car2;
	if (a == b) cout << "1";
	else {
		cout << "0000"; 
		return 0;
	} 
	if (car1[0] == car2[0] && car1[1] == car2[1]) cout << "1";
	else {
		cout << "000";   
		return 0;
	}
	int xulie1 = car1[2] - 'A' + 1, xulie2 = car2[2] - 'A' + 1;
	if (xulie1 >= 1 && xulie1 <= 3 && xulie2 >= 1 && xulie2 <= 3) {
		cout << "1";
	} else if (xulie1 == 4 && xulie2 == 6) {
		cout << "11";
		return 0;
	} else if (xulie1 == 6 && xulie2 == 4) {
		cout << "11";
		return 0;
	} else {
		cout << "00";
		return 0;
	}
	if (abs(xulie1 - xulie2) == 1) cout << "1";
	else cout << "0";
}
