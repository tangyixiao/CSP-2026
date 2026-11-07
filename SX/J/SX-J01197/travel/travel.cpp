#include <bits/stdc++.h>
using namespace std;
string b, d;

bool q(string x) {
	char y = x[2];
	return y;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int flag = 2;
	int flag1 = 2;
	int flag2 = 2;
	int flag3 = 2;
	int a, c;
	char A = 'A';
	char B = 'B';
	char C = 'C';
	char D = 'D';
	char F = 'F';

	cin >> a >> b >> c >> d;
	if (a == c) {
		flag = 1;
	} else {
		flag = 0;
		cout << "0000";
		return 0;

	}
	if (b[0] == d[0]) {
		if (b[1] == d[1])
			flag1 = 1;
		else {
			flag1 = 0;
			cout << "1000";
			return 0;
		}
	} else {
		flag1 = 0;
		cout << "1000";
		return 0;
	}
	if (b[2] == A || b[2]  == B || b[2]  == C) {
		if (d[2] == A || d[2] == B || d[2] == C)
			flag2 = 1;
		else {
			cout << "1100";
			return 0;
		}
	}
	if (b[2] == D || b[2] == F) {
		if (d[2] == D || d[2] == F)
			flag2 = 1;
		else {
			cout << "1100";
			return 0;
		}
	}
	if (b[2] == A ) {
		if (d[2] == B)
			flag3 = 1;
		else {
			cout << "1110";
			return 0;
		}
	}
	if (b[2] == B) {
		if (d[2] == A)
			flag3 = 1;
		else if (d[2] == C)
			flag3 = 1;
		else {
			cout << "1110";
			return 0;
		}
	}
	if (b[2] == C) {
		if (d[2] == B)
			flag3 = 1;
		else {
			cout << "1110";
			return 0;
		}
	}
	if (b[2] == D) {
		if (d[2] == F)
			flag3 = 1;
		else {
			cout << "1110";
			return 0;
		}
	}
	if (b[2] == F) {
		if (d[2] == D )
			flag3 = 1;
		else {
			cout << "1110";
			return 0;
		}
	}
	cout << flag << flag1 << flag2 << flag3;
	return 0;
}