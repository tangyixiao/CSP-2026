#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1, s1, c2, s2;
	string n1, n2;
	char m1, m2;
	string a;
	cin >> c1;
	cin >> s1;
	cin >> c2;
	cin >> s2;
	for (ll i = 0; s1[i]; i++) {
		if (isdigit(s1[i])) {
			n1 += s1[i];
		} else {
			m1 = s1[i];
		}
	}
	for (ll i = 0; s2[i]; i++) {
		if (isdigit(s2[i])) {
			n2 += s2[i];
		} else {
			m2 = s2[i];
		}
	}
	if (c1 == c2) {
		if (n1 == n2) {
			if ((((m1 - 'A' + 1) <= 3 ) && ( (m2 - 'A' + 1) <= 3)) ) {
				if (((long long)fabs((double)(m1 - 'A' + 1) - (m2 - 'A' + 1))) == 1) {
					cout << "1111";
					return 0;
				} else {
					cout << "1110";
					return 0;
				}
			}
			if ((((m1 - 'A' + 1) > 3)  && ((m2 - 'A' + 1) > 3 ) )) {
				if (((m2 == 'D') && (m1 == 'F')) || ((m1 == 'D') && (m2 == 'F'))) {
					cout << "1111";
					return 0;
				} else {
					cout << "1110";
					return 0;
				}
			}
			cout << "1100";
			return 0;
		} else {
			cout << "1000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}
	return 0;
}