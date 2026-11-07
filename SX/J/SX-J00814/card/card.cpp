#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		string n = 0, m = 0;
		n = n + s1[0] + s1[1];
		m = m + s2[0] + s2[1];
		if (n == m) {
			cout << 1;
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}
