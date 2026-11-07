#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	char c1, c2;
	bool f = 0;
	int a, b, c, d;
	cin >> a >> b >> c1 >> c >> d >> c2;
	if (a == c) {  //是否在同一车厢
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (b == d) {  //同一车厢的同一排
		cout << "1";
	} else {
		cout << "0";
	}
	if (b == d && ((c1 >= 'A' && c1 <= 'C') && (c2 >= 'A' && c2 <= 'C')) || ((c1 >= 'D' && c1 <= 'F') && (c2 >= 'D'
	        && c2 <= 'F'))) { //车厢同一排，过道同一侧
		cout << "1";
		f = 1;
	} else {
		cout << "0";
	}
	if (abs(c1 - c2) == 1 && f == 1) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}