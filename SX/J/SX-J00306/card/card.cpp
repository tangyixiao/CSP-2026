#include <bits/stdc++.h>
using namespace std;
int a[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
		cin >> a[i];
	cout << m << " " << n << " " << n;
	return 0;
}
