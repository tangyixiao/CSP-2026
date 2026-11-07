#include <bits/stdc++.h>
using namespace std;
int n, m;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int a[n + 5];

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << a[n];
	return 0;
}
/*4 2
3 15 12 12
*/
