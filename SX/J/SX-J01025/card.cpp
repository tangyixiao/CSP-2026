#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	int a[1000005];
	freopen("card1.in", "r", "stdin");
	freopen("card.out", "w", "stdout");
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int x = 1; x <= n; i++) {
			if (a[i] = a[x]) {
				a[x] = 0;
				if (a[i - 1] = 0 || a[i + 1] = 0) {
					a[i] = a[i - 1];
				}
			}
		}
	}
	cout << a[i]


}