#include <bits/stdc++.h>
#define re read()
#define wr(x) write(x)
#define sp putchar(' ')
#define endl puts("")

const int N = 1e6 + 10, INF = 0x3f3f3f3f;

using namespace std;

int read() {
	int y = 0, f = 1;
	char c = getchar();
	while (c < '0' || c > '9') f = c == '-' ? -1 : f, c = getchar();
	while (c >= '0' && c <= '9') y = (y << 1) + (y << 3) + (c ^ 48), c = getchar();
	return y * f;
}

void write(int x) {
	if (x < 0) x = -x, putchar('-');
	if (x > 9) write(x / 10);
	putchar(x % 10 + 48);
}

int a[N];
int ans[N], cnt[N];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n = re, m = re;
	for (int i = 1; i <= n; i++) a[i] = re;
	for (int s = 1; s <= n; s++) {
		stack<int> st;
		fill(cnt + 1, cnt + 1 + m, 0);
		for (int i = s; i <= n; i++) {
			if (!cnt[a[i]]) cnt[a[i]]++, st.push(a[i]);
			else while (!st.empty() && st.top() != a[i]) cnt[st.top()]--, st.pop();
		}
		while (!st.empty()) ans[st.top()]++, st.pop();
	}
	for (int i = 1; i <= m; i++) wr(ans[i]), sp;
}
