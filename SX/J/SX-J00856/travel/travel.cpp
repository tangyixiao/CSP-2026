#include <bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	//两张车票对应的座位是否在同一节车厢
	if (c1 == c2) {
		cout << "1";
		//两张车票对应的座位是否在同一节车厢的同一排
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << "1";
			//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
			if (s1[2] + s2[2] == 'A' + 'B' || s1[2] + s2[2] == 'A' + 'C' || s1[2] + s2[2] == 'C' + 'B'
			        || s1[1] + s2[1] == 'D' + 'F') {
				cout << "1";
				//两张车票对应的座位是否相邻
				if (s1[2] + s2[2] == 'A' + 'B' || s1[2] + s2[2] == 'C' + 'B' || s1[2] + s2[2] == 'D' + 'F') {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}