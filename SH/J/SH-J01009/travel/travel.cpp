#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	int s1pai, s2pai;
	char s1lie, s2lie;
	int res1, res2, res3, res4;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		res1 = 1;
	}
	else {
		res1 = 0;
	}
	s1lie = s1[2];
	s2lie = s2[2];
	if (s1[0] == '0') {
		s1pai = s1[1] - '0';
	}
	else {
		s1pai = s1[1] - '0' + (s1[0] - '0') * 10;
	}
	if (s2[0] == '0') {
		s2pai = s2[1] - '0';
	}
	else {
		s2pai = s2[1] - '0' + (s2[0] - '0') * 10;
	}
	if (res1 == 1) {
		if (s1pai == s2pai) {
			res2 = 1;
		}
		else {
			res2 = 0;
		}
		if (res2 == 1) {
			if (((s1lie == 'A' || s1lie == 'B' || s1lie == 'C') && 
			(s2lie == 'A' || s2lie == 'B' || s2lie == 'C')) || 
			((s1lie == 'D' || s1lie == 'F') && (s2lie == 'D' || s2lie == 'F'))) {
				res3 = 1;
				if (abs(s1lie-s2lie) == 1) {
					res4 = 1;
				}
				else if ((s1lie == 'D' && s2lie == 'F') || 
				(s2lie == 'D' && s1lie == 'F')) {
					res4 = 1;
				}
				else {
					cout << 1110;
					return 0;
				}
			}
			else {
				cout << 1100;
				return 0;
			}
		}
		else {
			res3 = 0;
			res4 = 0;
			cout << res1 << res2 << res3 << res4;
			return 0;
		}
		cout << res1 << res2 << res3 << res4;
	}
	else {
		cout << "0000";
		return 0;
	}
	return 0; 
} 
