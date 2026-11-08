#include <bits/stdc++.h>
using namespace std;
bool f(string s1,string s2) {
	char zw1 = s1[2];
	char zw2 = s2[2];
	if (zw1 == 'D' && zw2 == 'F') {
		return true;
	} else if (zw1 == 'F' && zw2 == 'D') {
		return true;
	} else if ('A' && zw2 == 'B') {
		return true;
	} else if (zw1 == 'B' && zw2 == 'A') {
		return true;
	} else if (zw1 == 'A' && zw2 == 'C') {
		return true;
	} else if (zw1 == 'C' && zw2 == 'A') {
		return true;
	} else if (zw1 == 'B' && zw2 == 'C') {
		return true;
	} else if (zw1 == 'C' && zw2 == 'B') {
		return true;
	}
	return false;
}
bool xianglin(string s1,string s2) {
	char zw1 = s1[2];
	char zw2 = s2[2];
	if (zw1 == 'D' && zw2 == 'F') {
		return true;
	} else if (zw1 == 'F' && zw2 == 'D') {
		return true;
	} else if ('A' && zw2 == 'B') {
		return true;
	} else if (zw1 == 'B' && zw2 == 'A') {
		return true;
	} else if (zw1 == 'B' && zw2 == 'C') {
		return true;
	} else if (zw1 == 'C' && zw2 == 'B') {
		return true;
	}
	return false;
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)  {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			if (f(s1,s2)) {
				if (xianglin(s1,s2)) {
					cout << "1111";
				} else cout << "1110";
			} else  cout << "1100";
		} else cout << "1000";
	} else cout << "0000";
		

	return 0;
}
