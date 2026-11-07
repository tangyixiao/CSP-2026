#include <bits/stdc++.h>
using namespace std;
int n, a[200010], ant, sum;
string s;
char b[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n <= 1) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		ant += a[i] ;
		for (int j = 1; j <= a[i]; j++) {
			s += b[i];
		}
	}
	for (int i = 0; i <= ant / 2 - 1; i++) {
		if (s[i] != s[ant - i - 1]) {
			sum++;
		}
	}
	cout << sum;
}