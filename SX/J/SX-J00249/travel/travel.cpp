#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st string
st a1, a2, b1, b2, s;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> a1 >> a2 >> b1 >> b2;
	if (a1 != b1)
		s += "0";
	else
		s += "1";

	if (a2[1] == b2[1] && a2[0] == b2[0] && s[0] == '1' )
		s += "1";
	else
		s += "0";

	bool f = 0, d = 0;
	if (a2[2] >= 'A' && a2[2] <= 'C')
		f = 1;
	if (b2[2] >= 'A' && b2[2] <= 'C')
		d = 1;
	if (f == d && s[1] == '1' && s[0] == '1')
		s += "1";
	else
		s += "0";
	if (abs(a2[2] - b2[2]) == 1 && s[0] == '1' && s[1] == '1' && s[2] == '1')
		s += "1";
	else
		s += "0";
	cout << s;
	return 0;
}
