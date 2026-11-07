#include <bits/stdc++.h>
#define GC() getchar()
#define PC(x) putchar(x)
using namespace std;
typedef long long ll;

ll Read() {
	ll ans = 0, f = 1, c = GC();
	while (c < 48 || c > 57)
		f = (c == '-' ? -1 : 1), c = GC();
	while (c >= 48 && c <= 57)
		ans = (ans << 3) + (ans << 1) + (c - 48), c = GC();
	return ans * f;
}

char Readc() {
	char c = GC();
	while (c < 'a' || c > 'z')
		c = GC();
	return c;
}

void Write(ll x) {
	if (x < 0)
		PC('-'), x = -x;
	if (x < 10) {
		PC(char(x + 48));
		return;
	}
	char ans[20];
	int len = 0;
	while (x) {
		ans[len++] = char(x % 10 + 48);
		x /= 10;
	}
	while (len--)
		PC(ans[len]);
	return;
}
ll n, a[300005], nal[300005], nar[300005], ltot = 0, rtot = 0;
char c[300005], ncl[300005], ncr[300005];
ll sum, ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	n = Read();
	if (n == 1) {
		PC('0');
		return 0;
	}
	for (int i = 1; i <= n; i++)
		a[i] = Read(), c[i] = Readc(), sum += a[i];
	if (sum & 1) {
		ll pos = 0, mid = sum / 2 + 1;
		for (int i = 1; i <= n; i++) {
			ll lst = pos;
			pos += a[i];
			if (lst < mid && mid <= pos) {
				if (mid - lst - 1 > 0) {
					nal[++ltot] = mid - lst - 1;
					ncl[ltot] = c[i];
				}
				if (pos - mid > 0) {
					nar[++rtot] = pos - mid;
					ncr[rtot] = c[i];
				}
				continue;
			}
			if (pos < mid)
				nal[++ltot] = a[i], ncl[ltot] = c[i];
			else if (mid < pos)
				nar[++rtot] = a[i], ncr[rtot] = c[i];
		}
	} else {
		ll pos = 0, mid = sum / 2;
		for (int i = 1; i <= n; i++) {
			ll lst = pos;
			pos += a[i];
			if (lst < mid && mid <= pos) {
				nal[++ltot] = mid - lst;
				ncl[ltot] = c[i];
				if (mid < pos)
					nar[++rtot] = pos - mid, ncr[rtot] = c[i];
			}
			if (pos < mid)
				nal[++ltot] = a[i], ncl[ltot] = c[i];
			else if (mid < pos)
				nar[++rtot] = a[i], ncr[rtot] = c[i];
		}
	}
	ll lenl = 0, lenr = 0;
	char lc = 0, rc = 0;
	for (int l = 1, r = rtot ;;) {
		while (lenl < lenr && l <= ltot) {
			lenl += nal[l];
			ll s = abs(lenl - lenr);
			lc = ncl[l++];
			if (rc != lc)
				ans += s;
		}
		if (r > 0) {
			lenr += nar[r];
			ll s = abs(lenl - lenr);
			rc = ncr[r--];
			if (rc != lc)
				ans += s;
		}
		if (l > ltot && r <= 0)
			break;
	}
	Write(ans);
	return 0;
}/*
5
3 a
2 b
4 a
2 c
2 v
*/