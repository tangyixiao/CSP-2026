#include <bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	//两张车票对应的座位是否在同一节车厢
	if (c1 == c2) {
		cout << "1";
		//两张车票对应的座位是否在同一节车厢的同一排
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << "1";
			//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
			if (s1[2] == 'A' && s2[2] == 'B' || s1[2] == 'A' && s2[2] == 'C' || s1[2] == 'B' && s2[2] == 'A' || s1[2] == 'B'
			        && s2[2] == 'C' || s1[2] == 'C' && s2[2] == 'A' || s1[2] == 'C' && s2[2] == 'B' || s1[2] == 'D' && s2[2] == 'F'
			        || s1[2] == 'F' && s2[2] == 'D') {
				cout << "1";
				//两张车票对应的座位是否相邻
				if (s1[2] == 'A' && s2[2] == 'B' || s1[2] == 'B' && s2[2] == 'A' || s1[2] == 'B' && s2[2] == 'C' || s1[2] == 'C'
				        && s2[2] == 'B' || s1[2] == 'D' && s2[2] == 'F' || s1[2] == 'F' && s2[2] == 'D') {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "0";
			}
		} else {
			cout << "0";
		}
	} else {
		cout << "0";
	}

	return 0;
}