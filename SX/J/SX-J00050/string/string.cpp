#include <bits/stdc++.h>
using namespace std;

int n, cnt;
string s, ss;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i = 1 ; i <= n ; i++) {
		int a;
		string b;
		cin >> a >> b;
		for (int j = 1 ; j <= a ; j++) {
			s = s + b;
		}
	}
	for (int i = 1 ; i <= s.size() ; i++) {
		ss[s.size() - i] = s[i];
	}
	for (int i = 1 ; i <= s.size() ; i++) {
		if (ss[i] != s[i])
			cnt++;
	}
	cout << cnt;
	return 0;
}