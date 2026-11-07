#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int c1, c2, ss1, ss2;
bool f = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;


	if (c1 == c2) {
		f = 1;
		cout << 1;
	} else {
		f = 0;
		cout << f;
	}


	ss1 = s1[1] * 10 - '0' + s1[2] - '0';
	ss2 = s2[1] * 10 - '0' + s2[2] - '0';
	if (ss1 == ss2 && f) {
		f = 1;
		cout << 1;
	} else {
		f = 0;
		cout << 0;
	}



	if ((((s1[3] == 'A' || s1[3] == 'B' || s1[3] == 'C') && (s2[3] == 'A' || s2[3] == 'B' || s2[3] == 'C'))
	        || (s1[3] == 'D' || s1[3] == 'F') && (s2[3] == 'D' || s2[3] == 'F')) && f) {
		f = 1;
		cout << 1;
	} else {
		f = 0;
		cout << 0;
	}


	if ((s1[3] - 1 == s2[3] || s1[3] + 1 == s2[3]) && f)
		cout << 1;
	cout << 0;


	return 0;
}