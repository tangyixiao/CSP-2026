#include <iostream>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a[10005], s = 0, x = 0;
	string b[10005];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> b[i];
	}
	for (int i = 2; i <= n; i++) {
		if (b[i] == b[i - 1]) {
			s++;
		}
	}

	if (s + 1 == n) {
		cout << 0;
	} else {
		for (int i = 2; i <= n; i++) {
			if (a[i] == a[i - 1]) {
				x++;
			}
		}
		if (x + 1 == n) {
			cout << a[1];
		}
	}

	return 0;
}
