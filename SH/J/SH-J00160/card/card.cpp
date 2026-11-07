#include <bits/stdc++.h>
using namespace std;

const int maxN = 5e5 + 10;
int n, m, top, a[maxN], st[maxN], cnt[maxN];
bool has[maxN];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout); 
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		memset(has, false, sizeof(has));
		for (int j = i; j <= n; j++) {
			if (!has[a[j]]) {
				has[a[j]] = true;
				st[++top] = a[j];
			} else while (st[top] != a[j]) has[st[top--]] = false;
		}
		// cout << i << " ~ " << n << " : ";
		for (int j = 1; j <= m; j++) {
			if (has[j]) {
				cnt[j]++;
				// cout << j << " ";
			}
		}
		// cout << '\n';
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << " ";
	return 0;
}
