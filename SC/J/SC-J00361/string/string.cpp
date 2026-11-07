#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int cnt, n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0;i < n;i ++) {
		int l;
		string a;
		cin >> l >> a;
		for (int j = 1;j <= l;j ++) {
			s1 += a;
		}
	}
	for (int i = 0;i < s1.length();i ++) {
		s2[i] = s1[s1.length() - i - 1];
	}
	cout << s2;
	for (int i = 0;i < s1.length();i ++) {
		if (s1[i] != s2[i]) {
			cnt ++;
		}
	}
	cout << cnt / 2;
	return 0;
}