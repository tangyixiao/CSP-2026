#include <bits/stdc++.h>
using namespace std;
char c[200005];
int a[200005], n;
long long ans;

int main() {
	//freopen("string6.in", "r", stdin);
	//freopen("string6.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> c[i];
	}
	int l = 0;
	int r = n - 1;
	while (l < r) {
		if (c[l] != c[r]) {
			ans += min(a[l], a[r]);
		}
		if (a[l] > a[r]) {
			a[l] -= a[r];
			r--;
		} else if (a[r] > a[l]) {
			a[r] -= a[l];
			l++;
		} else if (a[r] == a[l]) {
			l++;
			r--;
		}
	}
	cout << ans;
	return 0;
}