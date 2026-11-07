#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[380000];
	char b[59999];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	int s = 0;
	for (int i = 1; i < n; i++) {
		if (b[i] == b[i + 1]) {
			s++;
		}
	}

	if (s == n) {
		cout << 0;
	} else {
		cout << 3 * a[2];
	}
}