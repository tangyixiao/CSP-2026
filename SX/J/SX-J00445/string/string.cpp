#include <bits/stdc++.h>
using namespace std;
long long int a, b, cnt;
string s, d ;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> b >> s;
		for (int j = 1; j <= b; j++) {
			d = d + s;
		}
	}
	for (int i = 0; i <= (d.length() - 1) / 2; i++) {
		if (d[i] != d[d.length() - 1 - i])
			cnt++;
	}
	cout << cnt;
	return 0;
}