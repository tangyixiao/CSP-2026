#include <bits/stdc++.h>
using namespace std;
long long n, a, cnt;
string s = "";
char c;

void hwc(long long len1, string s1) {
	for (int i = 1; i * 2 <= len1; i++) {
		if (s1[i - 1] != s1[len1 - i]) {
			cnt++;
		}
	}
	cout << cnt;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			s = s + c;
		}
	}
	long long len = s.size();
	if (n == 1) {
		cout << 0;
	}
	if (n == 2) {
		if (s[0] == s[len - 1]) {
			cout << 0;
		} else {
			for (int i = 1; i * 2 <= len1; i++) {
				if (s1[i - 1] != s1[len1 - i]) {
					cnt++;
				}

			}
			cout << cnt;
		}
	}

	hwc(len, s);
	return 0;
}