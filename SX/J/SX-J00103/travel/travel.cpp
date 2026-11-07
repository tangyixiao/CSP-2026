#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll c, s;
ll c1, s1;
char c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c >> c1 >> c2;
	cin >> s >> s1 >> s2;
	if (c == s)
		cout << 1;
	else
		cout << 0;
	if (c == s && s1 == c1)
		cout << 1;
	else
		cout << 0;
	if (c != s || s1 != c1 || c2 == 'C' && s2 == 'D' || c2 == 'D' && s2 == 'C')
		cout << 0;
	else
		cout << 1;
	if (c != s || s1 != c1 || c2 == 'C' && s2 == 'D' || c2 == 'D' && s2 == 'C') {
		cout << 0;
	} else {
		if (s2 == 'A' && c2 == 'B' || s2 == 'B' && c2 == 'C' || s2 == 'D' && c2 == 'F' || s2 == 'B' && c2 == 'A' || s2 == 'C'
		        && c2 == 'B' || s2 == 'F' && c2 == 'D') {
			cout << 1;
		} else
			cout << 0;
	}
	return 0;
}
