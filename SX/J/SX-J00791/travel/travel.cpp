#include <bits/stdc++.h>
using namespace std;
string s, ss, e, ee;
bool f, ff, fff;
string a = "ABC", b = "DF";

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s >> ss >> e >> ee;
	if (s == e) {
		cout << 1;
		f = 1;
	} else if (s != e)
		cout << 0;
	if (ss[0] == ee[0] && ss[1] == ee[1] && f == 1) {
		cout << 1;
		ff = 1;
	} else
		cout << 0;
	if ((a.find(ss[2]) >= 0 && a.find(ss[2]) <= 2 && a.find(ee[2]) >= 0 && a.find(ee[2]) <= 2 && ff == 1)
	        || (b.find(ss[2]) >= 0 && b.find(ss[2]) <= 2 && b.find(ee[2]) >= 0 && b.find(ee[2]) <= 2 && ff == 1)) {
		cout << 1;
		fff = 1;
	} else
		cout << 0;
	if (abs(ss[2] - ee[2]) == 1 && fff == 1) {
		cout << 1;
	} else
		cout << 0;
	return 0;
}