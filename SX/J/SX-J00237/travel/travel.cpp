#include <bits/stdc++.h>
using namespace std;
bool flag = 1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string ca, cb, cc, cd;
	cin >> ca >> cb >> cc >> cd;
	for (int i = 0; i < 3; i++) {
		if (ca[i] != cc[i]) {
			flag = 0;
		}
	}
	cout << flag;
	if (flag) {
		for (int i = 0; i < 2; i++) {
			if (cb[i] != cd[i]) {
				flag = 0;
			}
		}
	}
	cout << flag;
	if (((cb[2] <= 'C' && cd[2] <= 'C') || (cb[2] >= 'D' && cd[2] >= 'D')) && flag == 1) {
		cout << flag;
	} else {
		flag = 0;
		cout << flag;
	}
	if (flag) {
		if (abs(cb[2] - cd[2]) == 1) {
			flag = 1;
		} else
			flag = 0;
	}
	cout << flag;

	return 0;
}
