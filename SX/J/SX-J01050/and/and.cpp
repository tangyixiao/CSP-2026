#include <bits/stdc++.h>
using namespace std;

int l[] = {0, 1};

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		cin >> l[i];
	}
	cout << l[n - 1];
	return 0;
}
