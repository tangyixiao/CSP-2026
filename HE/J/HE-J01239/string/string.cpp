#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int n, a[N], ans;
char c[N];
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios :: sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i ++) 
		cin >> a[i] >> c[i];
	int i = 1, j = n;
	int l = 0, r = 0;
	while (i < j) {
		if (l > 0) {
			if (c[i] != c[j]) ans += min(l ,a[j]);
			if (l > a[j]) l -= a[j], j --;
			else if (l < a[j]) r = a[j] - l, l = 0, i ++;
			else l = 0, i ++, j --;	
		} else if (r > 0) {
			if (c[i] != c[j]) ans += min(r, a[i]);
			if (r > a[i]) r -= a[i], i ++;
			else if (r < a[i]) l = a[i] - r, r = 0, j --;
			else i ++, j --, r = 0;
		} else {
			if (c[i] != c[j]) ans += min(a[i], a[j]);
			if (a[i] > a[j]) l = a[i] - a[j], j --;
			else if(a[i] < a[j]) r = a[j] - a[i], i ++;
			else i ++, j --;
		}
	}
	cout << ans << '\n';
	return 0;
}
