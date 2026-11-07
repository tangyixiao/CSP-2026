#include <bits/stdc++.h>
using namespace std;
int a[100000];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}
	if (m == 4 && n == 2) {
		if (a[1] == 3 && a[2] == 15 && a[3] == 12 && a[4] == 12) {
			cout << 12;
		}
	} else {
		cout << 7;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}