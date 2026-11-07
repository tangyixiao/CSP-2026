#include <bits/stdc++.h>
#define GC() getchar()
#define PC(x) putchar(x)
using namespace std;
typedef long long ll;

int Read() {
	int ans = 0, f = 1, c = GC();
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
	char ans[10];
	int len = 0;
	while (x) {
		ans[len++] = char(x % 10 + 48);
		x /= 10;
	}
	while (len--)
		PC(ans[len]);
	return;
}
int n, m, a[500005], stk[5000005], cnt[300005];
bool vis[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	n = Read();
	m = Read();
	for (int i = 1; i <= n; i++)
		a[i] = Read();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			vis[j] = 0;
		for (int j = 1; j <= n; j++)
			stk[j] = 0;
		int tot = 0;
		for (int j = i; j <= n; j++) {
			if (!vis[a[j]])
				stk[++tot] = a[j], vis[a[j]] = 1;
			else
				while (tot && stk[tot] != a[j])
					vis[stk[tot--]] = 0;
		}
		while (tot)
			cnt[stk[tot--]]++;
	}
	for (int i = 1; i <= m; i++)
		Write(cnt[i]), PC(' ');
	return 0;
}