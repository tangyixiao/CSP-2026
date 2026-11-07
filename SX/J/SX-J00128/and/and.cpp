#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int a[100005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			if (a[i] & a[i + 1] > ans)
				ans = a[i] & a[i + 1];
		}
	}
	cout << ans;
	return 0;
}
