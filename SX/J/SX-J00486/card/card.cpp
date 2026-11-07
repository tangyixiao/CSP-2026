#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[5000];
	int b[5000];
	int q = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] == a[j]) {
				i == j;
				break;
			}
			if (a[i] != a[n - 1]) {

			}
		}

	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
