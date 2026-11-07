#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
int num = 0;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	char n = b[2], m = d[2];
	if (a == c) {
		cout << 1;
		num++;
	} else {
		cout << 0;
		num++;
	}
	bool flag = 1;
	for (int i = 0; i < b.size() - 1; i++) {
		if (b[i] != d[i]) {
			cout << 0;
			num++;
			flag = 0;
			break;
		}
	}
	if (flag == 1 && a == c) {
		cout << 1;
		num++;
	} else {
		cout << 0;
		num++;
	}
	if (flag == 1 && a == c && (n == 'A' || n == 'B' || n == 'C') && (m == 'A' || m == 'B' || m == 'C')) {
		cout << 1;
		num++;
		if (abs(m - n) == 1) {
			cout << 1;
			num++;
		} else {
			cout << 0;
			num++;
		}
	}
	if (flag == 1 && a == c && (n == 'D' || n == 'E') && ( n == 'D' || m == 'E')) {
		cout << 1;
		num++;
		if (abs(m - n) == 1) {
			cout << 1;
			num++;
		} else {
			cout << 0;
			num++;
		}
	}
	while (num != 4) {
		cout << 0;
		++num;
	}




	return 0;
}
