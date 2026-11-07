#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		char ch;
		cin >> x >> ch;
		for (int j = 0; j < x; j++) {
			s += ch;
		}
	}
	int l = s.length();
	int i = 0, j = l - 1;
	int cnt = 0;
	while (i < j) {
		if (s[i] != s[j])
			cnt++;
		i++, j--;
	}
	cout << cnt;
	return 0;
}
//50pts