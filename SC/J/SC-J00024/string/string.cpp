#include <bits/stdc++.h>

#define int long long

using namespace std;

int n, result = 0;

string s, t;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	
	int x;
	char ch;
	for (int i = 1; i <= n; i++) {
		cin >> x >> ch;
		
		while (x--) {
			s += ch;
		}
	}
	
	string old_str = s;
	
	reverse(s.begin(), s.end());
	
	if (s == old_str) {
		cout << result << '\n';
	} else {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != old_str[i]) {
				result++;
			}
		}
		
		cout << result / 2 << '\n';
	}

	return 0;
}
