#include <bits/stdc++.h>

using namespace std;
#define int long long
const int N = 2e5 + 5;
char b[N];
int a[N], n, ans;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	int l = 1, r = n;
	while(l < r) {
		if(b[l] != b[r]) {
			ans += min(a[l], a[r]);
		}
		if(a[l] < a[r]) {
			
			a[r] -= a[l];
			l++;
		}else if(a[l] > a[r]) {
			a[l] -= a[r];
			r--;
		}else {
			l++;
			r--;
		}
	}
	cout << ans;
	return 0;
}