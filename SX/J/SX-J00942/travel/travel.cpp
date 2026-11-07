#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2 ;
string ans;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int k1 = (c1[0] - '0') * 10 + (c1[1] - '0');
	int k2 = (c2[0] - '0') * 10 + (c2[1] - '0');
	if (k1 == k2)
		ans[0] = '1';
	else
		ans[0] = '0';
	int k3 = (s1[0] - '0') * 10 + (s1[1] - '0');
	int k4 = (s2[0] - '0') * 10 + (s2[1] - '0');
	if (k1 == k2) {
		if (k3 == k4)
			ans[1] = '1';
		else
			ans[1] = '0';
	} else
		ans[1] = '0';
	int k5 = s1[2] ;
	int k6 = s2[2] ;
	if (k1 == k2) {
		if (k3 == k4) {
			if (((k5 == 'D' && k6 == 'F') || (k5 == 'F' && k6 == 'D')) || ((k5 == 'A' && k6 == 'B')
			        || (k5 == 'A' && k6 == 'C')
			        || (k5 == 'B'
			            && k6 == 'C') || (k5 == 'B' && k6 == 'A') || (k5 == 'C' && k6 == 'A') || (k5 == 'C' && k6 == 'B')))
				ans[2] = '1';
			else
				ans[2] = '0';
		} else
			ans[2] = '0';
	} else
		ans[2] = '0';
	if (k1 == k2) {
		if (k3 == k4) {
			if ((((k5 == 'D' && k6 == 'F') || (k5 == 'F' && k6 == 'D') ) || ((k5 == 'A' && k6 == 'B')
			        || (k5 == 'B'
			            && k6 == 'C') || (k5 == 'B' && k6 == 'A') || (k5 == 'C' && k6 == 'B'))))
				ans[3] = '1';
			else
				ans[3] = '0';
		} else
			ans[3] = '0';
	} else
		ans[3] = '0';
	for (int i = 0; i < 4; i++)
		cout << ans[i];
	return 0;
}
