#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	bool trun1 = 1, trun2 = 1, trun3 = 1, trun4 = 1;
	if (a != c) {
		trun1 = 0;
		trun2 = 0;
		trun3 = 0;
		trun4 = 0;
	}// 不在同一节车厢
	else if (b[0] != d[0] || b[1] != d[1]) {
		trun2 = 0;
		trun3 = 0;
		trun4 = 0;
	}// 不在同一节车厢的同一排
	else if ((b[2] == 'F' && d[2] != 'D') || (d[2] == 'F' && b[2] != 'D') || (b[2] == 'D' && d[2] != 'F') || (d[2] == 'D' && b[2] != 'F')) {
		trun3 = 0;
		trun4 = 0;
	}// 不在过道的同一侧
	else if (abs(b[2] - d[2]) != 1) {
		trun4 = 0;
	}// 不相邻
	cout << trun1 << trun2 << trun3 << trun4;
	return 0;
}
//do it on 8:53:50