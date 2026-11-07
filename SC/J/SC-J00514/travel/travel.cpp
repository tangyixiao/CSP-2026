#include <bits/stdc++.h>

using namespace std;

bool check(char ch) {return (ch == 'A' || ch == 'B' || ch == 'C');}
int check2(char ch) {
	switch (ch) {
		case 'A': return 1;
		case 'B': return 2;
		case 'C': return 3;
		case 'D': return 5;
		case 'E': return 6;
	}
}

signed main() {
	#define tcode
	#ifdef tcode
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	#endif
	string c1, s1, c2, s2; cin >> c1 >> s1 >> c2 >> s2;
	cout << "01"[c1 == c2];
	cout << "01"[s1.substr(0, 2) == s2.substr(0, 2) && c1 == c2];
	cout << "01"[check(s1[2]) == check(s2[2]) && s1.substr(0, 2) == s2.substr(0, 2) && c1 == c2];
	cout << "01"[abs(check2(s1[2]) - check2(s2[2])) == 1 && s1.substr(0, 2) == s2.substr(0, 2) && c1 == c2];
	return 0;
}