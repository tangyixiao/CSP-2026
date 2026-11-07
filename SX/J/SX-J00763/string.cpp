#include <bits/stdc++.h>
using namespace std;
int n, a, cnt;
string s, k;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n ;
	for (int i = 1; i <= n; i++) {
		cin >> a >> k;
		for (int j = 1; j <= a; j++) {
			s = s + k;
		}
	}
	int l = s.size();
	for (int i = 0; i < l / 2; i++) {
		if (s[i] != s[l - 1 - i]) {
			s[l - 1 - i] = s[i];
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}