#include <bits/stdc++.h>
#define N 500005

using namespace std;

int n, m;
int a[N];
int main() {
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << m << " ";
	for (int i = 1; i <= m - 1; i++) {
		if (abs (a[i] - a[i + 2]) == 0) {
			cout << m / 2 + a[i] << " ";
		}
		else {
			cout << abs (a[i] - a[i + 2]) << " ";
		}
	}
	return 0;
}