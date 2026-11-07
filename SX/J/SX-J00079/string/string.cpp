#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a;
	long long ans = 0;
	char c;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> c;
		for (int j = 0; j < a; j++)
			s.push_back(c);
		//cout << s << endl;
	}
	for (long long i = 0; i < (int)s.size() / 2; i++) {
		if (s[i] != s[s.size() - 1 - i]) {
			//cout << s[i] << ' ' << s[s.size() - 1 - i];
			ans++;
		}
	}
	cout << ans;
	return 0;
}
