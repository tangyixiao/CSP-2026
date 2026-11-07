#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 5;

int n, a[N], L[N], R[N];
int sum;
char c[N];

signed main () {
	ios::sync_with_stdio (false);
	cin.tie (nullptr);
	cout.tie (nullptr);
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		L[i] = R[i - 1] + 1;
		R[i] = R[i - 1] + a[i];
		sum += a[i];
	}
	int l, r, posl = 0, posr = 0;
	if (sum & 1) l = (sum - 1) / 2, r = (sum + 3) / 2;
	else l = sum / 2, r = sum / 2 + 1;
	for (int i = 1, s = 0; i <= n; i++) {
		s += a[i];
		if (!posl && l <= s) posl = i;
		if (!posr && r <= s) posr = i;
		if (posl && posr) break;
	}
	int lenl = l - L[posl] + 1;
	int lenr = R[posr] - r + 1;
	int ans = 0;
//	cout << l << " " << r << " " << sum << " " << posl << " " << posr << "\n";
	while (1) {
		if (lenl > lenr) {
			ans += (c[posl] != c[posr]) * lenr;
			lenl -= lenr;
			posr++;
			r = L[posr];
			lenr = R[posr] - r + 1;
		}
		else if (lenl < lenr) {
			ans += (c[posl] != c[posr]) * lenl;
			lenr -= lenl;
			posl--;
			l = R[posl];
			lenl = l - L[posl] + 1;
		}
		else if (lenl == lenr) {
			ans += (c[posl] != c[posr]) * lenl;
			if (posl == 1 || posr == n) break;
			posl--; posr++;
			l = R[posl]; r = L[posr];
			lenl = l - L[posl] + 1; lenr = R[posr] - r + 1;
		}
	}
	cout << ans;
	return 0;
}