#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string b, d;
	int a, c;
	cin >> a >> b >> c >> d;
	char s1, s2;
	int s3, s4;
	s1 = b[2];
	s2 = d[2];
	s3 = b[0] - '0' * 10 + b[1] - '0';
	s4 = d[0] - '0' * 10 + d[1] - '0';

	if (a == c)
		cout << 1;
	else
		cout << 0;
	if (a == c && s3 == s4)
		cout << 1;
	else
		cout << 0;
	if (a == c && s3 == s4 && (((s1 == 'A' && s2 == 'B') || (s1 == 'A' && s2 == 'C') || (s1 == 'B' && s2 == 'A')
	                            || (s1 == 'B'
	                                && s2 == 'C') || (s1 == 'C' && s2 == 'A') || (s1 == 'C' && s2 == 'B') ) || (s1 == 'D' && s2 == 'E' || s1 == 'E'
	                                        && s2 == 'D')))

		cout << 1;
	else
		cout << 0;
	if (a == c && s3 == s4 && ((s1 == 'A' && s2 == 'B') || (s1 == 'B' && s2 == 'A') || (s1 == 'B' && s2 == 'C')
	                           || (s1 == 'C' && s2 == 'B') || (s1 == 'D' && s2 == 'E') || (s1 == 'E' && s2 == 'D')))
		cout << 1;
	else
		cout << 0;
}
