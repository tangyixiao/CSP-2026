#include<bits/stdc++.h>
//#define int long long
using namespace std;
namespace hz {
	string c1, s1, c2, s2;
	int p[1005];
	signed main() {
		freopen("travel.in", "r", stdin);
		freopen("travel.out", "w", stdout);
		cin >> c1 >> s1 >> c2 >> s2;
		if (c1 == c2) {
			cout << 1;
		} else {
			cout << 0;
		}
		string t1 = to_string(s1[0]) + to_string(s1[1]), t2 = to_string(s2[0]) + to_string(s2[1]);
		if (c1 == c2 && t1 == t2) {
			cout << 1;
		} else {
			cout << 0;
		}
		p['A'] = 1, p['B'] = 2, p['C'] = 3, p['D'] = 5, p['F'] = 6;
		if (c1 == c2 && t1 == t2 && (p[s1[2]] <= 3 && p[s2[2]] <= 3 || p[s1[2]] >= 5 && p[s2[2]] >= 5)) {
			cout << 1;
		} else {
			cout << 0;
		}
		if (c1 == c2 && t1 == t2 && (p[s1[2]] + 1 == p[s2[2]] || p[s1[2]] - 1 == p[s2[2]])) {
			cout << 1;
		} else {
			cout << 0 << endl;
		}
		return 0;
	}
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	hz::main();
	return 0; 
}
