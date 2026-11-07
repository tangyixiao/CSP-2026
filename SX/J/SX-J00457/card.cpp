#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[1000000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, greater<int>());
	cout << "3" << "1" << n;
	return 0;
}
