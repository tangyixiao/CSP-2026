#include <bits/stdc++.h>
using namespace std;
bool p(string str1, string str2) {
	char s1 = str1[2];
	char s2 = str2[2];
	if((s2 == 'A' || s2 == 'B' || s2 == 'C') && (s1 == 'A' || s1 == 'B' || s1 == 'C')) {
		return true;
	}
	if((s2 == 'D' || s2 == 'F') && (s1 == 'D' || s1 == 'F')) {
		return true;
	}
	return false;
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2) {
		cout << "0000";
		return 0;
	}else {
		string l1, l2;
		l1 += s1[0];
		l1 += s1[1];
		l2 += s2[0];
		l2 += s2[1];
		if(l1 != l2) {
			cout << "1000";
			return 0;
		}else {
			if(!p(s1, s2)) {
				cout << "1100";
				return 0;
			}else {
				if((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && abs(s1[2] - s2[2]) <= 1) {
					cout << "1111";
					return 0;
				}else {
					if((s2[2] == 'D' || s2[2] == 'F') && (s1[2] == 'D' || s1[2] == 'F')) {
						cout << "1111";
						return 0;
					}
				}
				cout << "1110";
				return 0;
			}
		}
	}
	return 0;
} 
