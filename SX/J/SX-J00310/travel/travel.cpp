#include <bits/stdc++.h>
using namespace std;
#define int long long
string cl, cz;
bool flaga, flagb, flagc, flagd;
char a[15], b[15];

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> cl >> a >> cz >> b;
	if (cl == cz) {
		flaga = 1;
		cout << flaga;
	} else {
		flaga = 0;
		cout << flaga;
	}//两张车票对应的座位是否在同一节车厢；
	if (a[0] == b[0] and a[1] == b[1] and flaga == 1) {
		flagb = 1;
		cout << flagb;
	} else {
		flagb = 0;
		cout << flagb;
	}//两张车票对应的座位是否在同一节车厢的同一排；
	if (flagb == flaga == 1) {
		if ((a[2] >= 'A' && a[2] <= 'C' && b[2] >= 'A' && b[2] <= 'C') or (a[2] >= 'D' && a[2] <= 'F' && b[2] >= 'D'
		        && b[2] <= 'F') or a[2] == b[2]) {
			flagc = 1;
			cout << flagc;
		}
	} else {
		flagc = 0;
		cout << flagc;
	}//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
	if (flaga == flagb == flagc == 1 and a[2] > b[2]) {
		if (a[2] - b[2] == 1) {
			flagd = 1;
			cout << flagd;
		} else {
			flagd = 0;
			cout << flagd;
		}
		return 0;
	}
	if (flaga == flagb == flagc == 1 and a[2] == b[2]) {
		flagd = 1;
		cout << flagd;
		return 0;
	}

	if (flaga == flagb == flagc == 1 and a[2] < b[2]) {
		if (b[2] - a[2] == 1) {
			flagd = 1;
			cout << flagd;
		} else {
			flagd = 0;
			cout << flagd;
		}
		return 0;
	}//两张车票对应的座位是否相邻。
	return 0;
}