#include <bits/stdc++.h>
#define ll long long
#define rep(i, j, k) for (int i = (j); i <= (k); i++)
#define per(i, j, k) for (int i = (j); i >= (k); i--)
#define F(i, j, k) for (ll i = (j); i <= (k); i++)
#define dF(i, j, k) for (ll i = (j); i >= (k); i--)
#define pii pair<int, int>
#define fi first
#define se second
#define pb push_back
#define _debug(x) cout << (#x) << " --> " << (x) << '\n';
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) cout << '1';
	else {
		cout << "0000";
		return 0;
	}
	string s1f = s1.substr(0, 2), s2f = s2.substr(0, 2);
	if (s1f == s2f) cout << '1';
	else {
		cout << "000";
		return 0;
	}
	if ((s1f == s2f) && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')))
		cout << '1';
	else {
		cout << "00";
		return 0;
	}
	char a1 = s1[2], a2 = s2[2];
	if (a1 < a2) swap(a1, a2);
	if (s1f == s2f && ((a1 - a2 == 1) || (a1 == 'F' && a2 == 'D'))) cout << '1';
	else cout << '0';
	
	return 0;
}