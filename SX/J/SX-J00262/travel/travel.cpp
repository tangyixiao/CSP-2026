#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	//两张车票对应的座位是否在同一节车厢；
//两张车票对应的座位是否在同一节车厢的同一排；
// 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
//两张车票对应的座位是否相邻。
	string c1, s1, c2, s2, ans;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		ans += "1";
	} else {
		ans += "0";
	}
	if (c1 == c2 && (s1[0] == s2[0] && s1[1] == s2[1])) {
		ans += "1";
	} else {
		ans += "0";
	}
	if (c1 == c2 && (((s1[2] >= 'A' && s1[2] <= 'C') && (s2[2] >= 'A' && s2[2] <= 'C')) || ((s1[2] >= 'D' && s1[2] <= 'F')
	                 && (s2[2] >= 'D' && s2[2] <= 'F'))) && (s1[0] == s2[0] && s1[1] == s2[1])) {
		if (s1[2] + 1 == s2[2] || s1[1] - 1 == s2[2]) {
			ans += "11";
		} else {
			ans += "10";
		}
	} else {
		ans += "00";
	}
	cout << ans;
	return 0;
}