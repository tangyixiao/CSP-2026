#include <bits/stdc++.h>
using namespace std;
int a[200005];
string b[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, f = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 1; i < n; i++) {
		if (b[i] != b[i + 1])
			f = 0;
	}
	if (f == 1)
		cout << 0;
	return 0;
}