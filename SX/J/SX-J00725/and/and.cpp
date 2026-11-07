#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+6;
int n, m;
int a[N];

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort (a + 1, a + n + 1, cmp);
	int id = (a[1] & a[2]);
	for (int i = 3; i <= m; i++) {
		id = (id &a[i]);
	}
	cout << id;
	return 0;
}