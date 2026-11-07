#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];

bool cmp(long long x, long long y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++ )
		cin >> a[i];
	sort(a + 1, a + 1 + n, cmp);
	int cnt = 1;
	for (int i = 2; i <= n; i ++ ) {
		if (a[i] != a[i - 1])
			cnt ++ ;
		if (cnt == m) {
			cout << a[i];
			return 0;
		}
	}
	return 0;
}
