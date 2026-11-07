#include <bits/stdc++.h>
#define ll long long
#define Suika 0
#define rep(i, j, k) for(int i=j;i<=k;i++)
#define dow(i, j, k) for(int i=j;i>=k;i--)
using namespace std;
const int N = 2e5 + 10;
int n;
ll a[N];
char c[N];
ll len;
ll lena[N], lenb[N];
char ac[N], bc[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(Suika);
	cin.tie(Suika); cout.tie(Suika);
	cin >> n;
	rep(i, 1, n) {
		cin >> a[i] >> c[i];
		len += a[i];
	}
	ll ans = 0;
	if (len & 1) {
		ll sum = 0;
		int pos = 0;
		rep(i, 1, n) {
			sum += a[i];
			if (sum >= (len + 1) / 2) {
				pos = i; break;
			}
		}
		int cnta = pos - 1;
		ll sum1 = 0;
		rep(i, 1, pos - 1) {
			lena[i] = a[i];
			ac[i] = c[i];
			sum1 += a[i];
		}
		lena[++cnta] = (len + 1) / 2 - 1 - sum1;
		ac[cnta] = c[pos];
		int cntb = n - pos;
		dow(i, n, pos + 1) {
			lenb[n - i + 1] = a[i];
			bc[n - i + 1] = c[i];
		}
		lenb[++cntb] = a[pos] - lena[cnta] - 1; bc[cntb] = c[pos];
		int L = 1, R = 1;
		ll suml = 0, sumr = 0;
		while (L <= cnta && R <= cntb) {
			if (ac[L] != bc[R]) {
				if (suml + lena[L] <= sumr + lenb[R]) {
					ll l = max(suml, sumr);
					ll r = max(suml + lena[L], sumr);
					ans += max(0ll, r - l);
					suml += lena[L++];
				} else {
					ll l = max(suml, sumr);
					ll r = max(sumr + lenb[R], suml);
					ans += max(0ll, r - l);
					sumr += lenb[R++];
				}
			} else {
				if (suml + lena[L] <= sumr + lenb[R]) {
					suml += lena[L++];
				} else {
					sumr += lenb[R++];
				}
			}
		}
	} else {
		ll sum = 0;
		int pos = 0;
		rep(i, 1, n) {
			sum += a[i];
			if (sum >= (len) / 2) {
				pos = i; break;
			}
		}
		int cnta = pos - 1;
		ll sum1 = 0;
		rep(i, 1, pos - 1) {
			lena[i] = a[i];
			ac[i] = c[i];
			sum1 += a[i];
		}
		lena[++cnta] = len / 2 - sum1;
		ac[cnta] = c[pos];
		int cntb = n - pos;
		dow(i, n, pos + 1) {
			lenb[n - i + 1] = a[i];
			bc[n - i + 1] = c[i];
		}
		lenb[++cntb] = a[pos] - lena[cnta]; bc[cntb] = c[pos];
		int L = 1, R = 1;
		ll suml = 0, sumr = 0;
		while (L <= cnta && R <= cntb) {
			if (ac[L] != bc[R]) {
				if (suml + lena[L] <= sumr + lenb[R]) {
					ll l = max(suml, sumr);
					ll r = max(suml + lena[L], sumr);
					ans += max(0ll, r - l);
					suml += lena[L++];
				} else {
					ll l = max(suml, sumr);
					ll r = max(sumr + lenb[R], suml);
					ans += max(0ll, r - l);
					sumr += lenb[R++];
				}
			} else {
				if (suml + lena[L] <= sumr + lenb[R]) {
					suml += lena[L++];
				} else {
					sumr += lenb[R++];
				}
			}
		}
	}
	cout << ans;
	return Suika;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/