#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, x = 0;
	char a[1000010];
	freopen("string1.in", "r", "stdin");
	freopen("string.out", "w", "stdout");
	cin >> m
	for (int i = 0; i >= m; i++) {
		cin >> a[i];
	}
	for (int i = 0; i >= m; i++) {
		if (a[i] == a[m - i]) {
			cout << x;
		} else {
			x++;
		}
		cout << x;
	}
	return 0;
}