#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IL inline
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define FIO(name) freopen(name".in", "r", stdin), freopen(name".out", "w", stdout);
#define pii pair<int, int>
#define fst first
#define snd second
#define lop(i, a, b) for (auto i = (a); i <= (b); i++)
#define pol(i, a, b) for (auto i = (a); i >= (b); i--)
#define asmax(a, b) ((a) = max((a), (b)))
#define asmin(a, b) ((a) = min((a), (b)))
int main () {
	FIO("travel");
	IOS;
	string s1, s2, t1, t2;
	cin >> s1 >> s2 >> t1 >> t2;
	if (s1 == t1) {
		cout << "1";
		if (s2[1] == t2[1]) {
			cout << "1";
			if (('A' <= s2[2] && s2[2] <= 'C' && 'A' <= t2[2] && t2[2] <= 'C') || ('D' <= s2[2] && s2[2] <= 'E' && 'D' <= t2[2] && t2[2] <= 'E')) {
				cout << "1";
				if (abs(s2[2] - t2[2]) == 1) cout << "1";
				else cout << "0";
			} else cout << "00";
		} else cout << "000";
	} else cout << "0000";
	return 0;
}