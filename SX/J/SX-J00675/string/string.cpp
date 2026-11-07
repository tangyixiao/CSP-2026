#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	long long a[n + 5];
	char c[n + 5];
	string s = "";
	long long cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 0; j < a[i]; j++) {
			s += c[i];
		}
	}
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

