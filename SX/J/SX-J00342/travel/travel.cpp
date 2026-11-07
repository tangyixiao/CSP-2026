#include <bits/stdc++.h>
using namespace std;
string c1, c2, b1, b2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> b1 >> c2 >> b2;
	if (c1 == c2) { //在同一车厢
		cout << "1";
		if (b1[0] == b2[0] && b1[1] == b2[1]) { //在同一排
			cout << "1";
			if ((b1[2] >= 'A' && b1[2] <= 'C') && (b2[2] >= 'A' && b2[2] <= 'C')) { //在AC侧
				cout << "1";
				if ((b1[2] == 'A' && b2[2] == 'B') || (b2[2] == 'A' && b1[2] == 'B')) { //AB座
					cout << "1";
				} else if ((b1[2] == 'B' && b2[2] == 'C') || (b2[2] == 'B' && b1[2] == 'C')) { //BC座
					cout << "1";
				} else {//不相邻
					cout << "0";
				}
			} else if ((b1[2] >= 'D' && b1[2] <= 'F') && (b2[2] >= 'D' && b2[2] <= 'F')) {//在DF侧
				cout << "11";
			} else {//不在同一侧
				cout << "00";
			}
		} else {//不在同一排
			cout << "000";
		}
	} else {//不在同一车厢
		cout << "0000";
	}
	return 0;
}