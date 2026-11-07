#include <bits/stdc++.h>
using namespace std;
#define maxn 500005
#define maxm 300005
int n, m;
inline int read() {
	int x = 0, f = 1;
	char c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-')f = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9') {
		x = x * 10 + (c - '0');
		c = getchar();
	}
	return x * f;
}
int ans[maxm], a[maxn];
void Delete(int l) {
	if (l >= n) return;
	int sum = l;
	for (int i = n; i >= l; i--)
		if (a[i] == a[l]) {
			ans[a[l]]++, sum = i;
			break;
		}
	Delete(sum + 1);
}
void solve() {
	n = read(), m = read();
	for (int i = 1; i <= n; i++)scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++) Delete(i);
	ans[a[n]] = n;
	for(int i = 1;i <= m;i++) printf("%d ",ans[i]);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	solve();
	return 0;
}