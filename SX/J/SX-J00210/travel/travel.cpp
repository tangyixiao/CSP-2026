#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool f = 0;

bool q1() {
	if (c1 == c2)
		return true;
	else
		return false;
}

bool q2() {
	if (q1()) {
		if (s1[0] == s2[0] && s1[1] == s2[1])
			return true;
		else
			return false;
	} else
		return false;
}

bool q3() {
	if (q2()) {
		if (s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') {
			return true;
		} else if (s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D' && s2[2] <= 'F') {
			f = 1;
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}

bool q4() {
	if (q3()) {
		if (f) {
			return true;
		}
		if (s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) {
			return true;
		} else
			return false;
	} else {
		return  false;
	}
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (q1())
		cout << 1;
	else
		cout << 0;
	if (q2())
		cout << 1;
	else
		cout << 0;
	if (q3())
		cout << 1;
	else
		cout << 0;
	if (q4())
		cout << 1;
	else
		cout << 0;
	return 0;
}