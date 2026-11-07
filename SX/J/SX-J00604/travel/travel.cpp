#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b, c;
string s, l, n, m;
char k, j;

int main() {
	freopen("travel  .in", "r", stdin);
	freopen("travel  .out", "w", stdout);

	cin >> s >> l >> n >> m;
	k = l[l.size()];
	j = m[m.size()];
	if (s == n) {
		cout << 1;
		if ( l[0] == m[0] && l[1] == m[1] ) {
			cout << 1;
			if (k > 'C' && j > 'C' || k <= 'C' && j <= 'C') {
				cout << 1;
				if ((l[2]  == 'A' && m[2] == 'B' ) || (l[2]  == 'B' && m[2] == 'A') || (l[2]  == 'C' && m[2] == 'B') || ( l[2]  == 'B'
				        && m[2] == 'C' )
				        || (l[2]  == 'D'
				            && m[2] == 'F' ) || (l[2]  == 'F' && m[2] == 'D') )
					cout << 1;
				else
					cout << "0";
			} else
				cout << "00" ;
		} else
			cout << "000";

	} else
		cout << "0000";

	return 0;
}
