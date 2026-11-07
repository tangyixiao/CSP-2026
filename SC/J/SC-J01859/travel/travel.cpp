#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check1(char a, char b) {
	if (a == 'A') {
		if (b == 'B' || b == 'C')return 1;
		else return 0;
	} else if (a == 'B') {
		if (b == 'A' || b == 'C')return 1;
		else return 0;
	} else if (a == 'C') {
		if (b == 'A' || b == 'B')return 1;
		else return 0;
	} else if (a == 'D') {
		if (b == 'F')return 1;
		else return 0;
	} else if (a == 'F') {
		if (b == 'D')return 1;
		else return 0;
	}
}
bool check2(char a, char b) {
	if (a == 'A') {
		if (b == 'B')return 1;
		else return 0;
	} else if (a == 'B') {
		if (b == 'A' || b == 'C')return 1;
		else return 0;
	} else if (a == 'C') {
		if ( b == 'B')return 1;
		else return 0;
	} else if (a == 'D') {
		if (b == 'F')return 1;
		else return 0;
	} else if (a == 'F') {
		if (b == 'D')return 1;
		else return 0;
	}
}
string s1, t1, s2, t2;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> s1 >> t1 >> s2 >> t2;
	if (s1 == s2) {
		cout << 1;
	} else {
		cout << "0000\n";
		return 0;
	}
	if (t1[0] == t2[0] && t1[1] == t2[1]) {
		cout << 1;
	} else {
		cout << "000\n";
		return 0;
	}
	if (check1(t1[2], t2[2])) {
		cout << 1;
	} else {
		cout << "00\n";
		return 0;
	}
	cout << check2(t1[2], t2[2]);
	return 0;
}