#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	string s = "";
	long long a;
	char c;
	for (int i = 0; i < n; i++) {
		cin >> a >> c;
		for (int j = 0; j < a; j++) {
			s += c;
		}
	}

	long long cnt = 0;
	for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
		if (s[i] != s[j])
			cnt++;
	}
	cout << cnt << '\n';

	return 0;
}