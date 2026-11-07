#include <bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
int ans1,ans2,ans3,ans4;
void solve () {
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return ;
	}
	if (c1 == c2) {
		cout << "1";
		string x = "",y = "";
		x = s1[0] + s1[1],y = s2[0] + s2[1];
		if (x != y) {
			cout << "000";
			return ;
		}
		if (x == y) {
			cout << "1";
			char xx = ' ',yy = ' ';
			xx = s1[2],yy = s2[2];
			if ((xx <= 'C' && xx >= 'A' && yy <= 'F' && yy >= 'D') || (xx <= 'F' && xx >= 'D' && yy <= 'C' && yy >= 'A')) {
				cout << "00";
				return ;
			}
			if ((xx <= 'C' && xx >= 'A' && yy <= 'C' && yy >= 'A') || (xx <= 'F' && xx >= 'D' && yy <= 'F' && yy >= 'D')) {
				cout << "1";
				int s = xx - yy;
				s = abs (s);
				if (s != 1) {
					cout << "0";
					return ;
				}
				if (s == 1) {
					cout << "1";
					return ;
				}
			}
		}
	}
	return ;
}
signed main () {
	ios::sync_with_stdio (false);
	cin.tie (0);
	cout.tie (0);
	freopen ("travel.in","r",stdin);
	freopen ("travel.out","w",stdout);
	int _ = 1;
	//cin >> _;
	while (_ --) {
		solve ();
	}
	return 0;
}
//100 
