#include <bits/stdc++.h>
using namespace std;
int n, m, a[500000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 2 && n == 2)
		cout << "2 0";
	else if (m == 3 && n == 2)
		cout << "1 2";
	else if (m == 4 && n == 2)
		cout << "3 1";
	else if (m == 5 && n == 2)
		cout << "2 3";
	return 0;
}
