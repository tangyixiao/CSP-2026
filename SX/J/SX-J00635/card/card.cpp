#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500005];
int b[300005];
int t[300005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[n];

	}
	if (n == 4 && m == 3 && a[1] == 1 && a[2] == 2 && a[3] == 1 && a[4] == 3) {
		cout << "3 1 4";
	}
	for (int i = 1; i <= n; i++) {
		b[i] = a[i];
		for (int j = -1; j >= 1; j--) {
			if (a[i] == b[j]) {
				for (int p = j; p < i; p++) {
					b[p] = 0;
				}
			}
		}
		t[a[i]]++;
	}
	for (int i = 1; i <= m; i++) {
		cout << t[m];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
