#include <bits/stdc++.h>
using namespace std;
string k, s;
int n, a, b;

int main() {
	freopen("string.in", "r", stdin);
	feropen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		cin >> s;
		for (int j = 1; j <= a; j++) {
			s += k;
		}
	}
	for (int i = 0; i <= s.size() / 2 ; i++) {
		for (int j = 0; j <= s.size() / 2 ; j--) {
			if (s[i] != s[j]) {
				b++;
			}
		}
	}
	cout << b;
	return 0;
}
