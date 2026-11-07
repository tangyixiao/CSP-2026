#include <bits/stdc++.h>
using namespace std;
int n, m, ans, maxx = -1;
int a[1000005];

int main() {
	freopen("and.in", "r", "stdin");
	freopen("and.out", "w", "stdout");
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int ax = a[i] & a[j];
			maxx = max(maxx, ax);
		}
	}
	cout << maxx;
	return 0;
}