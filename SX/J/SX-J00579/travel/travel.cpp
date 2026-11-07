#include <bits/stdc++.h>
using namespace std;
int r1, x1;
char r[3], x[3];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> r1 >> x1;
	if (r1 <= 17 && r1 != 1 && r1 != 16) {
		cout << 1;
	} else {
		cout << 0;
	}
	//两张车票对应的座位是否在同一节车厢
	if (r[0] == x[0]) {
		cout << 1;
	} else {
		cout << 0;
	}//两张车票对应的座位是否在同一排
	if (r1 == 'A' && x1 == 'B' || r1 == 'B' && x1 == 'C' || r1 == 'D' && x1 == 'F') {
		cout << 1;
	} else {
		cout << 0;
	}
	//是否位于过道的同一侧
	if (r1 == 'A' && x1 == 'B' || r1 == 'B' && x1 == 'C' || r1 == 'D' && x1 == 'F') {
		cout << 1;

	} else {
		cout << 0;
	}//是否相邻
	return 0;
}