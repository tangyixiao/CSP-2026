#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
int a[200005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << (a[1]&a[2]) << endl;
	return 0;
}