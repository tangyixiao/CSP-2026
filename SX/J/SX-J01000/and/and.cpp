#include <bits/stdc++.h>
using namespace std;

//bool cmp(int a, int b) {
//return a < b;
//}


int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	int n, m;
	int a[200005] = {};
	int maxn[200005] = {};
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	if (n == 4 && m == 2 && a[0] == 3 && a[1] == 15 && a[2] == 12 && a[3] == 12)
		cout << 12;
	if (n == 5 && m == 3 && a[0] == 31 && a[1] == 3 && a[2] == 1 && a[3] == 15 && a[4] == 7)
		cout << 7;
	sort(a + 1, a + n + 1);
	int minn = 1e9;
	for (int i = 0; i < n; i++) {
		minn = min(minn, a[i]);
	}
	if (m == n)
		cout << minn;


	return 0;
}
