#include <bits/stdc++.h>
using namespace std;
int q[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s = "";
	string s2 = "";
	for (int i = 0; i < n; i++) {
		int a;
		char c;
		cin >> a >> c;
		s += c;
		q[i] = a;
	}
	for (int i = s.size() - 1; i >= 0; i--) {
		s2 += s[i];
	}
	if (s == s2) {
		cout << 0;
		return 0;
	}
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s2[i]) {
			cnt += q[i];
			cout<<
		}
	}
	cnt /= 2;
	cnt += 1;
	cout << cnt;
	return 0;
}