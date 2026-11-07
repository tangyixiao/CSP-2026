#include <bits/stdc++.h>
using namespace std;


int n, m;
int ls[500010];


int main() {
	freopen("and.in", "w", stdin);
	freopen("and.out", "r", stdout);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> ls[i];
	}

	sort(ls + 1, ls + 1 + n, greater<int>());
	cout << ls[m];

	return 0;
}