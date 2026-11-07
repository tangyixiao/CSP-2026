#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long m;
	char a;
	string s;
	for (int i = 1; i <= n; i++) {
		cin >> m >> a;
		for (long long j = 1; j <= m; j++) {
			s += a;
		}
	}
	long long num = 0;
	for (int i = 0; i < s.size(); i++) {
		if (i >= s.size() - 1 - i) {
			break;
		}
		if (s[i] != s[s.size() - 1 - i]) {
			num++;
		}
	}
	cout << num;
	return 0;
}
