#include <bits/stdc++.h>
using namespace std;
int n, x, cnt;
string s, s1;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> s;
		for (int j = 1; j <= x; j++) {
			s1 += s;
		}
	}
	for (int i = 0; i <= s1.size() - 1; i++) {
		for (int j = s1.size() - 1; j >= 0; j--) {
			if (s1[i] != s1[j]) {
				cnt++;
				s1[j] = s1[i];
			}

		}
	}
	cout << cnt;
	return 0;
}
