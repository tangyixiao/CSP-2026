#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	string a, b;
	cin >> n;
	if (n == 0) {
		cout << "0";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
	}

	for (int i = 0; i < n; i++) {
		if (b[i] != b[i + 1]) {
			cout << "0";
			return 0;
		} else {
			cout << "0";
		}
	}
	return 0;
}
