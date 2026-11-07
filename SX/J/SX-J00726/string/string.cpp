#include <bits/stdc++.h>
using namespace std;
int n;
long long o;
string s, s1;
long long res;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> o >> s1;
		for (int j = 1; j <= o / 4; j++) {
			s = s + s1 + s1 + s1 + s1;
		}
		for (int j = 1; j <= o % 4; j++) {
			s = s + s1;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (s[i - 1] != s[n - i]) {
			res++;
		}
	}
	cout << res;
	return 0;
}