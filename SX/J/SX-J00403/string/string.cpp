#include <bits/stdc++.h>
using namespace std;
int a[100005];
char c[100005];

int main() {
	char b;
	int sum = 0;
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	if (n == 1) {
		cout << "0";
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		if (n == 2) {
			if (c[i] == c[i + 1]) {
				cout << "0";
				return 0;
			} else {
				cout << a[i];
				return 0;
			}
		}
		b = c[1];
		if (c[i] == b)
			sum += a[i];
	}
	cout << sum;
	return 0;
}
