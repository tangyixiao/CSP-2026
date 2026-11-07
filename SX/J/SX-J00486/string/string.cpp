#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	int a[100];
	char c[100];
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int j = 0; j < n; j++) {
		if (c[j] != c[n - j - 1]) {
			count = count + a[j];
			c[n - j - 1] = c[j];
		}
		if (a[j] > a[n - 1 - j]) {
			a[n - 2 - j] = a[n - 2 - j] + a[n - 1 - j] - a[j];
		}
		if (a[j] < a[n - 1 - j]) {
			a[n - 1 - j] = a[n - 1 - j] - a[j];
		}
	}
	cout << count;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
