#include <bits/stdc++.h>
using namespace std;
long long a, b, sum;
string b1, b2;
char b1pj;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> a;
	while (a--) {
		cin >> b >> b1pj;
		for (int i = 1; i <= b; i++) {
			b1 += b1pj;
		}
	}
	b2 = b1;
	reverse(b1.begin(), b1.end());
	int len = b2.length();
	if (b1 == b2)
		cout << 0;
	return 0;
	if (len % 1 == 0) {
		for (int i = len / 2, j = len / 2; i >= 0, j < len; i--, j++) {
			if (b2[i] != b2[j]) {
				sum++;
			}
		}
	} else {
		for (int i = len / 2, j = len / 2; i >= 0, j < len; i--, j++) {
			if (b2[i] != b2[j]) {
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
