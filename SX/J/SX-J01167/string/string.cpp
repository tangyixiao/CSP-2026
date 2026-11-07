#include <bits/stdc++.h>
using namespace std;
long long a[1000000005];
string c[100005];

string hw(string s) {
	string s2 = 0;
	for (int i = s.size() - 1; i >= 0; i--) {

		for (int j = 0; j < s.size; j++) {
			s2[j] = s[i];
		}
	}
	return s2;
}

int len(string s) {
	int res = s.find(hw(s));
	if (res < 0)
		return sizeof(s);
	else
		return res;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s = 0;
	if (i == 1) {
		cout << 0;
	}
	if (i == 2) {
		cout << 1;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];

		s = c[i] + c[i - 1];

	}
	if (hw(s) == s)
		cout << 0;
	return 0;
	else {
		if (len(s) = size.s()) {
			cout << s.size;
			return 0;
		} else {
			int cnt = s.size - hw(s).size;
			cout << cnt;
			return 0;
		}
	}
}