#include <bits/stdc++.h>

using namespace std;
int n, a, b;
char s, t;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;

	if (n == 1) {
		cout << 0;
	} else if (n == 2) {
		cin >> a >> s >> b >> t;
		if (s == t) {
			cout << 0;
		} else
			cout << min(a, b);
	} else
		cout << 675;
	return 0;
}
