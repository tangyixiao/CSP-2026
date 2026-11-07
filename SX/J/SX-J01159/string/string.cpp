#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int a[1000000], n, sss = 0;
	char c;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c;
		if (a[i] == 2 && c == 'a') {
			sss++;
		}
	}
	cout << a[1];
	return 0;
}