#include <bits/stdc++.h>
using namespace std;
string s;
char q;
int n, m, cnt, x, p, a;

int main() {
	//freopen("string.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p >> q;
		for (int j = a; j <= p + a; j++) {
			s[j] = q;
			a++;
		}
	}
	x = s.length();
	for (int i = 0; i <= x; i++) {
		if (s[i] == s[x - 1] - i) {
			cnt++;
		}

	}
	cout << cnt;







	return 0;
}
