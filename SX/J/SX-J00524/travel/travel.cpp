#include <bits/stdc++.h>
using namespace std;

struct c {
	string cx;
	string zw;
} a[5];

void pg() {
	if (a[0].cx != a[1].cx)
		cout << "0000";
	else {
		cout << "1";
		bool flag = 0;
		for (int i = 0; i < 2; i++) {
			if (a[0].zw[i] != a[1].zw[i])
				flag = 1;
		}
		if (flag == 1) {
			cout << "000";
			return;
		} else {
			cout << "1";
			if (a[0].zw[2] == 'F' && a[1].zw[2] == 'D' || a[0].zw[2] == 'D' && a[1].zw[2] == 'F' || a[0].zw[2] == 'A'
			        && a[1].zw[2] == 'B' || a[0].zw[2] == 'B' && a[1].zw[2] == 'A' || a[0].zw[2] == 'A' && a[1].zw[2] == 'C'
			        || a[0].zw[2] == 'C' && a[1].zw[2] == 'A' || a[0].zw[2] == 'B' && a[1].zw[2] == 'C' || a[0].zw[2] == 'C'
			        && a[1].zw[2] == 'B') {
				cout << "1";
				if (a[0].zw[2] == 'F' && a[1].zw[2] == 'D' || a[0].zw[2] == 'D' && a[1].zw[2] == 'F' || a[0].zw[2] == 'A'
				        && a[1].zw[2] == 'B' || a[0].zw[2] == 'B' && a[1].zw[2] == 'A' || a[0].zw[2] == 'B' && a[1].zw[2] == 'C'
				        || a[0].zw[2] == 'C' && a[1].zw[2] == 'B') {
					cout << "1";
					return;
				} else {
					cout << "0";
					return;
				}
			} else {
				cout << "00";
				return;
			}
		}
	}
}

void in() {
	for (int i = 0; i < 2; i++) {
		cin >> a[i].cx >> a[i].zw;
	}
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	in();
	pg();
	fclose(stdin);
	fclose(stdout);
	return 0;
}