#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n, m, ans = 0, a[200005];
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	long long maxx = 0;
	if (m == 1) {
		for (int i = 0;i < n;i++) {
			if (a[i] > maxx) maxx = a[i];
		}
		ans = maxx;
	} else if (m == 2) {
		int x;
		for (int i = 0;i < n;i++) {
			for (int j = i + 1;j < n;j++) {
				x = a[i] & a[j];
				if (x > maxx) maxx = x;
				x = 0;
			}
		}
		ans = maxx;
	} else if (m == n) {
		for (int i = 0;i < n;i++) {
			if (i == 0) {
				maxx = a[i];
				continue;
			}
			maxx = maxx & a[i];
		}
		ans = maxx;
	}
	cout << ans << endl;
	return 0;
}
