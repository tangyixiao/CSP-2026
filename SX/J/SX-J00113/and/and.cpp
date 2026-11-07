#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << a[1];
	return 0;
}