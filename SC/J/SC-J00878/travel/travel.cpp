#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
	freopen("travel.in",r, stdin);
	freopen("travel.out",w, stdin);
	int D = 0;
	int a1, a2;
	char a[10], b[10];
	cin >> a1 >> a[1] >> a[2] >> a[3] >> a2 >> b[1] >> b[2] >> b[3];
	if (a1 == a2) {
		D = D + 1000;
	}
	if (D == 1000) {
		if (a[1] == b[1]&a[2] == b[2]) {
			D = D + 100;
		}
		if (D == 1100) {
			if (a[3] == 'C') {
				if (b[3] == 'B' || b[3] == 'A') {
					D = D + 10;
				}
			}
			if (a[3] == 'B') {
				if (b[3] == 'C' || b[3] == 'A') {
					D = D + 10;
				}
			}
			if (a[3] == 'A') {
				if (b[3] == 'B' || b[3] == 'C') {
					D = D + 10;
				}
			}
			if (a[3] == 'D') {
				if (b[3] == 'F') {
					D = D + 10;
				}
			}
			if (a[3] == 'F') {
				if (b[3] == 'D') {
					D = D + 10;
				}
			}
			if (a[3] < 'C') {
				if (a[3] + 1 == b[3] || a[3] - 1 == b[3]) {
					D = D + 1;
				}
			}
			if (a[3] == 'C') {
				if (b[3] == 'B') {
					D = D + 1;
				}
			}
			if (a[3] == 'D') {
				if (b[3] == 'F') {
					D = D + 1;
				}
			}
			if (a[3] == 'F') {
				if (b[3] == 'D') {
					D = D + 1;
				}
			}
		}
	}
	if (D == 0) {
		cout << "0000";
		return 0;
	}
	cout << D;
	return 0;
}