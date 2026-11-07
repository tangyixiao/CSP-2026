#include <bits/stdc++.h>
using namespace std;
int n, a, cnt;
long long f;
char c;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	while (n--) {
		cin >> a >> c;
		if (a > 1000000 || f != 0) {
			f = f + a;
		} else {
			for (int i = 1; i <= a; i++) {
				cnt++;
				s[cnt] = c;
			}
		}
	}
	if (f == 0) {
		for (int i = 1; i <= cnt / 2; i++) {
			if (s[i] != s[cnt - i + 1])
				f++;
		}
	}
	if (n % 2 == 0) {
		f = f / 2;
	} else {
		f = f / 2;
	}
	cout << f;
	return 0;
}