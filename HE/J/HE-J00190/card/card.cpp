#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5, M = 3e5 +5;
int a[N], cnt[M], head[M], last;
unordered_set<int> mp;
inline void del(int x) {
	mp.erase(a[x]);
	head[a[x]] = 0;
}
inline void insert(int x) {
	mp.insert(a[x]);
	head[a[x]] = x;
}
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (int k = 1; k <= n; k++) {
		memset(head, 0, sizeof(head));
		mp.clear();
		for (int i = k; i <= n; i++) {
			if (head[a[i]]) {
				last = head[a[i]];
				del(head[a[i]]);
				for (int j = 1; j <= m; j++) {
					if (head[j] != 0 && head[j] > last) del(head[j]);
				}
			}
			insert(i);
		}
		for (auto e : mp) cnt[e]++; 
	}
	for (int i = 1; i <= m; i++) printf("%d ", cnt[i]);
	return 0;
}
