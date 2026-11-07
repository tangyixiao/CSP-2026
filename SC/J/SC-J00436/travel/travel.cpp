#include <bits/stdc++.h>
#define int long long
using namespace std;
string ca, sa, cb, sb;
signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> ca >> sa >> cb >> sb;
	if (ca != cb) cout << 0;
	else cout << 1;
	if (ca == cb && sa[0] == sb[0] && sa[1] == sb[1]) cout << 1;
	else cout << 0;
	if (ca == cb && sa[0] == sb[0] && sa[1] == sb[1] && ((sa[2] <= 'C' && sb[2] <= 'C') || (sa[2] > 'C' && sb[2] > 'C'))) cout << 1;
	else cout << 0;
	if (ca == cb && sa[0] == sb[0] && sa[1] == sb[1] && ((sa[2] <= 'C' && sb[2] <= 'C') || (sa[2] > 'C' && sb[2] > 'C')) && (sa[2] + 1 == sb[2] || sb[2] + 1 == sa[2])) cout << 1;
	else cout << 0;
	return 0;
}