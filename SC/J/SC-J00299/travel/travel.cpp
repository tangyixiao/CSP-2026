#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
//	cin.exceptions(ios::badbit | ios::failbit);
	
	pair<string, string> left, right;
	cin >> left.first >> left.second >> right.first >> right.second;
	if (left.first == right.first) {
		cout << 1;
		if (left.second.substr(0, 2) == right.second.substr(0, 2)) {
			cout << 1;
			if ((left.second.back() <= 'C' && right.second.back() <= 'C') || (left.second.back() > 'C' && right.second.back() > 'C')) {
				cout << 1;
				if ((left.second.back() + 1 == right.second.back()) || (right.second.back() + 1 == left.second.back())) cout << 1;
				else cout << 0;
			} else cout << "00";
		} else cout << "000";
	} else cout << "0000";
	
	return 0;
}