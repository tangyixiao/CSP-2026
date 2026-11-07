#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int a, cut = 0;
	char b;
	string s = {};
	while (n != 0) {
		cin >> a >> b;
		int i;
		for (i = cut; i <= cut + a; i++) {
			s[i] = b;
		}
		cut += a;
		n--;
	}

	int sum = cut / 2;
	for (int i = 0, y = cut; i <= (cut / 2); i++, y--) {
		if (s[i] == s[y]) {
			sum -= 1;
		}
	}
	cout << sum + 1;



}