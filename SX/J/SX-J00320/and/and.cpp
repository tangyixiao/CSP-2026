#include <bits/stdc++.h>
using namespace std;
int a[200005], n, m, mj;
int ans = -1, sum = 0;

int main() {
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];

	}
	for (int i = 1; i <= n; i++) {
		int sum;
		for (int j = i; j <= n; j++) {
			for (int k = 1; k <= m; k++) {
				sum =  a[i] & a[j];
			}

		}

		ans = max(sum, ans);
	}
	cout << ans;
	return 0;
}