#include <bits/stdc++.h>
using namespace std;

long long tests = 1;

struct Seat {
	int box;
	int row;
	char seat;
};

map<char, int> isNear;

Seat seat1, seat2;

string ans = "0000";

void case_() {
	isNear['A'] = 1;
	isNear['B'] = 2;
	isNear['C'] = 3;
	isNear['D'] = 5;
	isNear['F'] = 6;

	cin >> seat1.box >> seat1.row >> seat1.seat;
	cin >> seat2.box >> seat2.row >> seat2.seat;

	if (seat1.box == seat2.box) {
		ans[0] = '1';
	}
	if (ans[0] - '0' && seat1.row == seat2.row) {
		ans[1] = '1';
	}
	if (ans[1] - '0' && (('A' <= seat1.seat && seat1.seat <= 'C' && 'A' <= seat2.seat && seat2.seat <= 'C')
	                     || ('D' <= seat1.seat && seat1.seat <= 'F' && 'D' <= seat2.seat && seat2.seat <= 'F'))) {
		ans[2] = '1';
	}
	if (ans[2] - '0' && abs(isNear[seat1.seat] - isNear[seat2.seat]) == 1) {
		ans[3] = '1';
	}

	cout << ans;
}

int main() {
	freopen("travel.in", "r", stdin);
//	freopen("travel1.in", "r", stdin);
	freopen("travel.out", "w", stdout);

//	cin >> tests;
	while (tests--) {
		case_();
	}

//	int ret = system("fc travel1.ans travel.out");
//	if (ret == 0) {
//		cerr << "Accepted.\n";
//	} else if (ret == 1) {
//		cerr << "Wrong Answer.\n";
//	} else {
//		cerr << "Compare Error.\n";
//	}

	return 0;
}