#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll c, cc;
string s, ss;
bool f;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	f = true;
	cin >> c >> s >> cc >> ss;
	if (c == cc)
		cout << 1;
	else
		cout << 0;
	if (s[0] == ss[0] && s[1] == ss[1] && c == cc)
		cout << 1;
	else
		cout << 0;
	if (s[0] == ss[0] && s[1] == ss[1] && c == cc && abs(ss[2] - s[2]) <= 2) {
		if ((ss[2] == 'C' && s[2] == 'D') || (s[2] == 'C' && ss[2] == 'D')) {
			cout << 0;
			f = false;
		} else
			cout << 1;
	} else {
		cout << 0;
		f = false;
	}
	if (f && abs(ss[2] - s[2]) <= 1)
		cout << 1;
	else
		cout << 0;

	return 0;
}
