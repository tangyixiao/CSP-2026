#include<bits/stdc++.h>
using namespace std;

string train1, train2;
string seat1, seat2;
string ans;

int differ[] = {0, 0, 0, 1, 1};

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> train1 >> seat1 >> train2 >> seat2;
	//两张车票对应的座位是否在同一节车厢
	if (train1 != train2) {
		//如果两个座位都不在同一列车厢那么后面的条件可定不会满足
		cout << "0000";
		return 0;
	}
	//两张车票对应的座位是否在同一节车厢的同一排
	if (seat1[0] != seat2[0] || seat1[1] != seat2[1]) {
		cout << "1000";
		return 0;
	}
	// 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
	if (differ[seat1[2] - 'A'] != differ[seat2[2] - 'A']) {
		cout << "1100";
		return 0;
	}
	//两张车票对应的座位是否相邻
	if (abs(seat1[2] - seat2[2]) != 1) {
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
}