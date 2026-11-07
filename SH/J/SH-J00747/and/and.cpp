#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
#define int long long
int n,m;
int a[N];
void solve () {
	cin >> n >> m;
	for (int i = 1;i <= n;i ++) {
		cin >> a[i];
	}
	int ans = 0;
	if (m == 1) {
		for (int i = 1;i <= n;i ++) 
		ans = max (ans,a[i]);
	}
	if (m == 2) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			cnt = a[i] & a[j];
			ans = max (ans,cnt);
		}
	}
	if (m == 3) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++)
			for (int k = j + 1;k <= n;k ++) 
			cnt = a[i] & a[j] & a[k];
			ans = max (ans,cnt);
		}
	}
	if (m == 4) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			cnt = a[i] & a[j] & a[k] & a[l];
			ans = max (ans,cnt);
		}
	}
	if (m == 5) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u];
			ans = max (ans,cnt);
		}
	}
	if (m == 6) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p];
			ans = max (ans,cnt);
		}
	}
	if (m == 7) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y];
			ans = max (ans,cnt);
		}
	}
	if (m == 8) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h];
			ans = max (ans,cnt);
		}
	}
	if (m == 9) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b];
			ans = max (ans,cnt);
		}
	}
	if (m == 10) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t];
			ans = max (ans,cnt);
		}
	}
	if (m == 11) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			for (int r = t + 1;r <= n;r ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t] & a[r];
			ans = max (ans,cnt);
		}
	}
	if (m == 12) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			for (int r = t + 1;r <= n;r ++) 
			for (int e = r + 1;e <= n;e ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t] & a[r] & a[e];
			ans = max (ans,cnt);
		}
	}
	if (m == 13) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			for (int r = t + 1;r <= n;r ++) 
			for (int e = r + 1;e <= n;e ++) 
			for (int w = e + 1;w <= n;w ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t] & a[r] & a[e] && a[w];
			ans = max (ans,cnt);
		}
	}
	if (m == 14) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			for (int r = t + 1;r <= n;r ++) 
			for (int e = r + 1;e <= n;e ++) 
			for (int w = e + 1;w <= n;w ++) 
			for (int q = w + 1;q <= n;q ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t] & a[r] & a[e] && a[w] & a[q];
			ans = max (ans,cnt);
		}
	}
	if (m == 15) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			for (int r = t + 1;r <= n;r ++) 
			for (int e = r + 1;e <= n;e ++) 
			for (int w = e + 1;w <= n;w ++) 
			for (int q = w + 1;q <= n;q ++) 
			for (int z = q + 1;z <= n;z ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t] & a[r] & a[e] && a[w] & a[q] & a[z];
			ans = max (ans,cnt);
		}
	}
	if (m == 16) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			for (int r = t + 1;r <= n;r ++) 
			for (int e = r + 1;e <= n;e ++) 
			for (int w = e + 1;w <= n;w ++) 
			for (int q = w + 1;q <= n;q ++) 
			for (int z = q + 1;z <= n;z ++) 
			for (int g = z + 1;g <= n;g ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t] & a[r] & a[e] && a[w] & a[q] & a[z] & a[g];
			ans = max (ans,cnt);
		}
	}
	if (m == 17) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			for (int r = t + 1;r <= n;r ++) 
			for (int e = r + 1;e <= n;e ++) 
			for (int w = e + 1;w <= n;w ++) 
			for (int q = w + 1;q <= n;q ++) 
			for (int z = q + 1;z <= n;z ++) 
			for (int g = z + 1;g <= n;g ++) 
			for (int f = g + 1;f <= n;f ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t] & a[r] & a[e] && a[w] & a[q] & a[z] & a[g] & a[f];
			ans = max (ans,cnt);
		}
	}
	if (m == 18) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			for (int r = t + 1;r <= n;r ++) 
			for (int e = r + 1;e <= n;e ++) 
			for (int w = e + 1;w <= n;w ++) 
			for (int q = w + 1;q <= n;q ++) 
			for (int z = q + 1;z <= n;z ++) 
			for (int g = z + 1;g <= n;g ++) 
			for (int f = g + 1;f <= n;f ++) 
			for (int c = f + 1;c <= n;c ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t] & a[r] & a[e] && a[w] & a[q] & a[z] & a[g] & a[f] & a[c];
			ans = max (ans,cnt);
		}
	}
	if (m == 19) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			for (int r = t + 1;r <= n;r ++) 
			for (int e = r + 1;e <= n;e ++) 
			for (int w = e + 1;w <= n;w ++) 
			for (int q = w + 1;q <= n;q ++) 
			for (int z = q + 1;z <= n;z ++) 
			for (int g = z + 1;g <= n;g ++) 
			for (int f = g + 1;f <= n;f ++) 
			for (int c = f + 1;c <= n;c ++) 
			for (int a1 = c + 1;a1 <= n;a1 ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t] & a[r] & a[e] && a[w] & a[q] & a[z] & a[g] & a[f] & a[c] & a[a1];
			ans = max (ans,cnt);
		}
	}
	if (m == 20) {
		for (int i = 1;i <= n;i ++) {
			int cnt = 0;
			for (int j = i + 1;j <= n;j ++) 
			for (int k = j + 1;k <= n;k ++) 
			for (int l = k + 1;l <= n;l ++) 
			for (int u = l + 1;u <= n;u ++) 
			for (int p = l + 1;p <= n;p ++) 
			for (int y = p + 1;y <= n;y ++) 
			for (int h = p + 1;h <= n;h ++) 
			for (int b = h + 1;b <= n;b ++) 
			for (int t = b + 1;t <= n;t ++) 
			for (int r = t + 1;r <= n;r ++) 
			for (int e = r + 1;e <= n;e ++) 
			for (int w = e + 1;w <= n;w ++) 
			for (int q = w + 1;q <= n;q ++) 
			for (int z = q + 1;z <= n;z ++) 
			for (int g = z + 1;g <= n;g ++) 
			for (int f = g + 1;f <= n;f ++) 
			for (int c = f + 1;c <= n;c ++) 
			for (int a1 = c + 1;a1 <= n;a1 ++) 
			for (int s1 = a1 + 1;s1 <= n;s1 ++) 
			cnt = a[i] & a[j] & a[k] & a[l] && a[u] && a[p] & a[y] & a[h] & a[b] & a[t] & a[r] & a[e] && a[w] & a[q] & a[z] & a[g] & a[f] & a[c] & a[a1] & a[s1];
			ans = max (ans,cnt);
		}
	}
	cout << ans;
	return ;
}
signed main () {
	ios::sync_with_stdio (false);
	cin.tie (0);
	cout.tie (0);
	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	int _ = 1;
	//cin >> _;
	while (_ --) {
		solve ();
	}
	return 0;
}
//20
