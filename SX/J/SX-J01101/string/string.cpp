#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	int n, sum = 0;
	string s = "";
	int a[100005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		int ai;
		char ci;
		cin >> ai >> ci;
		a[i] = ai;
		s += ci;
	}
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - 1 - i])
			sum += max(a[i], a[n - 1 - i]);
	}
	cout << sum;

	return 0;
}