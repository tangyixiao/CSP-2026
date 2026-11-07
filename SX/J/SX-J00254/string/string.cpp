#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long sum = 0;
	cin >> n;
	string s = {};
	for (int i = 1; i <= n; i++) {
		long long bbbb;
		char sb;
		cin >> bbbb >> sb;
		for (int j = 1; j <= bbbb; j++) {
			s += sb;
		}
	}
	long long l = s.size();
	if (l % 2) {
		for (int i = 0; i < (l - 1) / 2; i++) {
			if (s[i] != s[l - i]) {
				sum++;
			}
		}
	} else {
		for (int i = 0; i < l / 2; i++) {
			if (s[i] != s[l - i]) {
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}