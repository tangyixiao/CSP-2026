#include<bits/stdc++.h>
#define int long long
int n, ans;
int a[200005];
char b[200005];
using namespace std;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1 ; i <= n ; i ++) {
		cin >> a[i] >> b[i];
	}
	int r = n, l = 1;
	while (r > l) {
		if (b[l] == b[r]) {
			if (a[l] > a[r]){
				a[l] -= a[r];
				r --;
			} else if (a[l] < a[r]) {
				a[r] -= a[l];
				l ++;
			} else {
				l ++, r ++;
			}
		} else {
			if (a[l] > a[r]){
				a[l] -= a[r];
				ans += a[r];
				r --;
			} else if (a[l] < a[r]) {
				a[r] -= a[l];
				ans += a[l];
				l ++;
			} else {
				l ++, r ++;
				ans += a[l];
			}
		}
	}
	cout << ans;
	return 0;
}

