#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200050], ans;


bool cmp(int a, int b) {
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin  >> a[i] ;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++) {
		if (a[i] % 2 == 1) {
			ans = a[i];
			break;
		}
	}
	if (n == m) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	int hav = 0;
	for (int i = 1; i <= n; i++) {
		if (hav == m) {

			break;
		} else if (a[i] % 2 == 1) {

			ans = ans &a[i];
			hav++;
		}
	}

	cout  << ans;
	return 0;
}