#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	//判断是否在同一个车厢
	int cnt = 0;
	for (int i = 0; i < 2; i++) {
		if (a[i] == c[i]) {
			cnt++;
		}
	}
	if (cnt == 2) {
		cout << "1";
		//判断是否在同一个车厢的同一排
		int ans = 0;
		for (int i = 0; i < 2; i++) {
			if (b[i] == d[i]) {
				ans++;
			}
		}
		if (ans == 2) {
			cout << "1";
			//判断是否在同一个车厢的同一排且位于过道的同一侧
			//顺手判断
			//两张车票对应的座位是否相邻
			if (b[3 - 1] == 'A' && d[3 - 1] == 'B')
				cout << "11";
			else if (b[2] == 'A' && d[2] == 'C')
				cout << "10";
			else if (b[2] == 'B' && d[2] == 'C')
				cout << "11";
			else if (b[2] == 'D' && d[2] == 'F')
				cout << "11";
			else if (d[2] == 'A' && b[2] == 'B')
				cout << "11";
			else if (d[2] == 'A' && b[2] == 'C')
				cout << "10";
			else if (d[2] == 'B' && b[2] == 'C')
				cout << "11";
			else if (d[2] == 'D' && b[2] == 'F')
				cout << "11";
			else
				cout << "00";
		} else
			cout << "000";
	} else {
		cout << "0000";
	}
	return 0;
}