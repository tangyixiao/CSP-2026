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

void Write(int x) {
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
ll n, m, a[200005], ans = LLONG_MIN / 2, maxx2 = 1, y = 1;

void dfs(int cnt, int st, ll cur) {
	if (cur <= ans)
		return;
	if (cnt == m + 1) {
		ans = cur;
		return;
	}
	for (int i = st; i <= n; i++)
		dfs(cnt + 1, i + 1, cur & a[i]);
	return;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	n = Read();
	m = Read();
	for (int i = 1; i <= n; i++)
		a[i] = Read();
	for (int i = 1; i <= 33; i++)
		maxx2 *= 2;
	dfs(1, 1, maxx2 - 1);
	Write(ans);
	return 0;
}