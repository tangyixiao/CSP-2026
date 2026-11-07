#include <bits/stdc++.h>
using namespace std;
string s, ss, a, aa;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s >> ss >> a >> aa;
	if (s == a)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	if (ss[0] == aa[0] && ss[1] == aa[1])
		cout << "1";
	else {
		cout << "000";
		return 0;
	}
	if ((ss[2] <= 'C' && aa[2] <= 'C') || (ss[2] > 'C' && aa[2] > 'C'))
		cout << "1";
	else {
		cout << "00";
		return 0;
	}
	if (ss[2] + 1 == aa[2] || ss[2] - 1 == aa[2])
		cout << "1";
	else
		cout << "0";
	return 0;
}
