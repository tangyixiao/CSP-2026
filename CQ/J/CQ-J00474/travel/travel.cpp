#include <bits/stdc++.h>

using namespace std;

namespace zcq_qwq {
	string a, b, c, d;
	
	void main() {
		cin >> a >> b >> c >> d;
		if (a == c) cout << 1;
		else cout << 0;
		string x = b.substr(0, 2);
		string y = d.substr(0, 2);
		if (a == c && x == y) cout << 1;
		else cout << 0;
		char ch1 = b[2], ch2 = d[2];
		if (a == c && x == y && (ch1 <= 'C' && ch2 <= 'C' || ch1 > 'C' && ch2 > 'C')) cout << 1;
		else cout << 0;
		if ((a == c && x == y && (ch1 <= 'C' && ch2 <= 'C' || ch1 > 'C' && ch2 > 'C')) && (ch1 + 1 == ch2 || ch2 + 1 == ch1)) cout << 1;
		else cout << 0; 
	}
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	zcq_qwq::main();
	return 0;
}

