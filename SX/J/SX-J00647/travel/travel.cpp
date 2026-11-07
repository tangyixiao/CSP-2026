#include <bits/stdc++.h>
using namespace std;
string cr;
string sr;
string cx;
string sx;
int flag = 1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> cr >> sr >> cx >> sx;
	//两张车票对应的座位是否在同一节车厢
	if (cr == cx)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	//两张车票对应的座位是否在同一节车厢的同一排
	for (int i = 0; i <= 1; i++) {
		if (sr[i] != sx[i])
			flag = 0;
	}
	if (flag)
		cout << "1";
	else {
		cout << "000";
		return 0;
	}
	flag = 1;
	//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
	int s1, s2;
	s1 = sr[2] - 'A' + 1;
	s2 = sx[2] - 'A' + 1;
	if ((s1 <= 3 && s2 <= 3) || (s1 > 3 && s2 > 3))
		cout << "1";
	else {
		cout << "00";
		return 0;
	}
	//两张车票对应的座位是否相邻
	if (abs(s1 - s2) == 1)
		cout << "1";
	else
		cout << "0";
	return 0;
}