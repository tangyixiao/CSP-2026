#include <bits/stdc++.h>
using namespace std;
int n, a[100886], s = 1, ans = 0;
string c[100886], S[10008886];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> c[i];
	}
	for (int i = 0; i < n; i++) {
		if (c[i] == c[i - 1])
			s++;
	}
	if (s == n)
		cout << "0";

	return 0;
}
