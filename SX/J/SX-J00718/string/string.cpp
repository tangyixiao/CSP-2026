#include <bits/stdc++.h>
using namespace std;
int x = 0, y = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	char a[100000], b[100000];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	if (n = 2 && b[1] != b[2]) {
		cout << "1";

		return 0;
	}
	if (n == 1) {
		cout << "0";
		return 0;
	}


	for (int i = 1; i <= n; i++) {
		if (b[i] == b[i + 1]) {
			x++;
		}
	}
	if (x == n) {
		cout << "0";
	}
	return 0;
}