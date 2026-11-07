#include <bits/stdc++.h>
using namespace std;
//#define int long long
int n, a, b, cnt;
string s, ss, aa, bb, cc, dd, ee, ff;

//signed
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> aa >> s >> bb >> ss;
	if (aa != bb) {
		cout << "0000";
		return  0;
	} else {
		cout << "1";
		int l = s.size();
		int ll = ss.size();
		for (int i = 0; i < l; i++) {
			if (s[i] >= 'A' && s[i] <= 'G') {
				cc = s[i];
			}
			if (s[i] >= '0' && s[i] <= '9') {
				ee = ee + s[i];
			}
		}
		for (int i = 0; i < ll; i++) {
			if (ss[i] >= 'A' && ss[i] <= 'G') {
				dd = ss[i];
			}
			if (ss[i] >= '0' && ss[i] <= '9') {
				ff = ff + ss[i];
			}
		}
		if (ee != ff) {
			cout << "000";
		} else {
			cout << "1";
			//if (abs(cc - dd) == 1 )
			for (int i = 0; i < 1; i++) {
				if (cc[i] == 'C' && dd[i] == 'D')
					cout << "00";
				else	if (cc[i] == 'D' && dd[i] == 'C')
					cout << "00";
				else {
					cout << "1";
					if (cc[i] == 'A' && dd[i] == 'C')
						cout << "0";
					else if (cc[i] == 'C' && dd[i] == 'A')
						cout << "0";
					else
						cout << "1";

				}

			}

		}


	}
	//01 16
	return 0;
}