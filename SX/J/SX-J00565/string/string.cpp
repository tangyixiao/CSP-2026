#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int k;
	string s = "", x, ss;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k >> x;
		while (k--) {
			s += x;
		}
	}
	ss = s;
	reverse(s.begin(), s.end());
	long long l = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ss[i])
			l++;
	}
	cout << l / 2 << endl;
	return 0;
}
