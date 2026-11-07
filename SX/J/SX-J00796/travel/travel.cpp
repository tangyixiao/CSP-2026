#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s, sa, sc, sd;
ll q, w, e, r;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s >> sa >> sc >> sd;
	if (s == sc) {
		q = 1;

	}
	if (q == 1 && sa[1] == sd[1] && sa[0] == sd[0]) {
		w = 1;
	}
	if (w == 1 && ((sa[2] < 'D' && sd[2] < 'D') || (sa[2] > 'C' && sd[2] > 'C'))) {
		e = 1;
		if (((sa[2] + 1) == sd[2]) || ((sa[2] - 1) == sd[2])) {
			r = 1;
		}
	}
	cout << q << w << e << r;
	return 0;
}
