#include "bits/stdc++.h"
#define int long long
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)
#define ft first
#define sd second
#define pii pair<int, int>
#define qwq while (1) cout << "qwq\n";
using namespace std;
const int N = 1, INF = 0x3f3f3f3f3f3f3f3fll;
int c1, c2;
string s1,s2;
int p1, p2, l1, l2;
auto init() -> void {}
auto solution() -> void {
	cin >> c1 >> s1 >> c2 >> s2;
	p1 = ((s1[0] - 48) * 10 + s1[1] - 48);
	p2 = ((s2[0] - 48) * 10 + s2[1] - 48);
	l1 = s1[2] - 'A' + 1;
	l2 = s2[2] - 'A' + 1;
	if (l1 == 'F' - 'A' + 1) l1 = 'E' - 'A' + 1;
	if (l2 == 'F' - 'A' + 1) l2 = 'E' - 'A' +1;
//	cout << p1 << " " << l1 << " " << p2 << " " << l2 << "\n";
	if (c1 != c2) {
		cout << "0000";
		return ;
	}
	cout << "1";
	
	if (p1 == p2) {
		cout << "1";
	} else cout << "0";
	if (p1 == p2 && ((l1 <= 3 && l2 <= 3) || (l1 >= 4 && l2 >= 4))) {
		cout << "1";
	} else cout << "0";
	cout << (p1 == p2 && ((l1 <= 3 && l2 <= 3) || (l1 >= 4 && l2 >= 4)) && abs(l1 - l2) <= 1);
}
auto main()-> signed {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int T = 1;
//	cin >> T;
	while (T--) {
		init();
		solution();
	}
	return 0;
}

