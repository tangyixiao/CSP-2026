#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], t[200005];

int main() {

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 2; j <= n; j++) {
			t[a[i] | a[j]]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (t[i] == m)
			cout << i;
	}
	return 0;
}
