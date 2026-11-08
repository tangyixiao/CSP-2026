#include <bits/stdc++.h>
using namespace std;
#define int long long
int c1, c2;
string s1, s2;
signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2) cout << "0000";
	else {
		int sita = (s1[0] - '0') * 10 + s1[1] - '0';
		int sitb = (s2[0] - '0') * 10 + s2[1] - '0';
		if(sita != sitb) cout << "1000";
		else {
			char wa = s1[2], wb = s2[2];
			if((wa >= 'A' && wa <= 'C' && wb >= 'A' && wb <= 'C') || (wa >= 'D' && wa <= 'F' && wb >= 'D' && wb <= 'F')) {
				if((wa == 'A' || wa == 'C') && (wb == 'A' || wb == 'C')) {
					cout << "1110";
				} else {
					cout << "1111";
				}
			} else {
				cout << "1100";
			}
		}
	}
	return 0;
} 
