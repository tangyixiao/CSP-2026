#include <bits/stdc++.h>
using namespace std;
long long n, a, cnt;
string c, s;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			string s = s + c;
		}
	}
	string s1 = s;
	reverse(s.begin(), s.end());
	if (s == s1) {
		cout << 0;
	}
	return 0;
}