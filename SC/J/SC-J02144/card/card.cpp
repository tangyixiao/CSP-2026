#include<bits/stdc++.h>
using namespace std;
const int N = 3e5+5;
int n, m, a[N], ans[N], head;
int st[N], top, p[N];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		top = 0;
		memset(p, 0, sizeof p);
		for (int j = i; j <= n; j++) {
			if (p[a[j]] != 0) {
				for (int k = p[a[j]]+1; k <= top; k++)
					p[st[k]] = 0;
				top = p[a[j]];
			} else {
				st[++top] = a[j];
				p[a[j]] = top;
			}
		}
		for (int j = 1; j <= top; j++)
			ans[st[j]]++;
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}