#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[2005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin << a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int MAX = a[0] & a[0 + i];
		}
		max(MAX, a[i]&a[i + 1]);
	}
	cout << MAX;
	fclose(stdin);
	fclose(stdout);
	return 0;
}