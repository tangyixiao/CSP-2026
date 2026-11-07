#include <bits/stdc++.h>
using namespace std;
vector<char> s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	long long ans = 0;
	int n, x;
	cin >> n;
	char c;
	for (int i = 1; i <= n; i++) {
		cin >> x >> c;
		int size = s.size() + x;
		for (int j = s.size(); j <= size; j++) {
			s.push_back(c);
		}
	}
	for (int i = 0, j = (s.size() - 1) / 2; i < (s.size() / 2), j >= 0; i++, j--) {
		if (s[i] != s[j]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}