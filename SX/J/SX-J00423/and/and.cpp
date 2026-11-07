#include <bits/stdc++.h>
using namespace std;
int a[100005];
int n, m, sum;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum = a[i];
	}
	cout << sum;
	return 0;
}

