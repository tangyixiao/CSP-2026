#include <bits/stdc++.h>
using namespace std;
string Rx, Xx;
string r, x;

int q1(string x, string y) {
	if (x == y) {
		return 1;
	} else {
		return 0;
	}
}

int q2(int tc, string x, string y) {
	if (tc == 1) {
		if (x[0] == y[0] && x[1] == y[1]) {
			return 1;
		} else {
			return 0;
		}
	} else {
		return 0;
	}

}

int q3(int tcp, string x, string y) {
	if (tcp == 1) {
		if (x[2] >= 'A' && x[2] <= 'C' && y[2] >= 'A' && y[2] <= 'C' || x[2] >= 'D' && x[2] <= 'F' && y[2] >= 'D'
		        && y[2] <= 'F') {
			return 1;
		} else {
			return 0;
		}
	} else {
		return 0;
	}
}

int q4(int tp, string x, string y) {
	if (tp == 1) {
		if (x[2] == 'A' && y[2] == 'B' || x[2] == 'B' && y[2] == 'A' || x[2] == 'B' && y[2] == 'C' || x[2] == 'D'
		        && y[2] == 'F' || x[2] == 'F' && y[2] == 'D') {
			return 1;
		} else {
			return 0;
		}
	} else {
		return 0;
	}
}

int main() {
//	freopen("travel.in", "r", stdin);
//	freopen("travel.out", "w", stdout);
	cin >> Rx >> r >> Xx >> x;
	int qq1, qq2, qq3, qq4;
	qq1 = q1(Rx, Xx);
	qq2 = q2(qq1, r, x);
	qq3 = q3(qq2, r, x);
	qq4 = q4(qq2, r, x);
	cout << qq1 << qq2 << qq3 << qq4;
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}
