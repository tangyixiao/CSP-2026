#include <bits/stdc++.h>
using namespace std;
#define int long long
string c1, s1, c2, s2;
string s11, s21;
char s12, s22;

signed main() {
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i < 3; ++i) {
		if (i < 2) {
			s11[i] = s1[i];
			s21[i] = s2[i];
		} else {
			s12 = s1[i];
			s22 = s2[i];
		}
	}
	if (c1 == c2)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	if (s11[0] == s21[0] && s11[1] == s21[1])
		cout << "1";
	else {
		cout << "000";
		return 0;
	}
	if (s12 <= 'C' && s22 <= 'C')
		cout << "1";
	else if (s12 <= 'F' && s22 <= 'F' && s12 > 'C' && s22 > 'C')
		cout << "1";
	else {
		cout << "00";
		return 0;
	}
	if (s12 - s22 == 1 || s12 - s22 == -1)
		cout << "1";
	else {
		cout << "0";
	}
	return 0;
}