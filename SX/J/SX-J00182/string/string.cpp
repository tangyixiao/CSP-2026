#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		char m;
		cin >> x >> m;
		for (int j = 1; j <= x; j++)
			s += m;
	}
	int sz = s.size();
	for (int i = 0; i < sz / 2; i++) {
		if (s[i] != s[sz - i - 1])
			cnt++;
	}
	cout << cnt;
	return 0;
}
