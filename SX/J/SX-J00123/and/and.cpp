#include <bits/stdc++.h>
using namespace std;
int z[200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> z[i];
	}
	cout << z[n];
	return 0;
}
