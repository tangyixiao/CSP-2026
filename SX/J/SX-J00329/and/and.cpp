#include <bits/stdc++.h>
using namespace std;
int nn[200099];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long  n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> nn[i];
	}
	sort(nn + 1, nn + n + 1);
	long long  b = nn[n];
	long long  c = n - 1;
	for (int i = 1; i <= m - 1; i++) {
		b = b &nn[c];
		c--;
	}
	cout << b;
	return 0;
}
