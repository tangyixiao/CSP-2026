#include<cstdio>
int constexpr N = 5e5 + 1, M = 3e5 + 1;
int n, m, seq[N], app[M], nxt[N], lst[M];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i = 1;i <= n;i++) {
		scanf("%d", &seq[i]);
	}
	for(int i = n;i >= 1;i--) {
		if(!lst[seq[i]]) lst[seq[i]] = i;
		else nxt[i] = lst[seq[i]];
	}
	for(int i = 1;i <= n;i++) {
		for(int j = i;j <= n;j++) {
			//printf("%d: %d\n", j, seq[j]);
			while(nxt[j]) j = nxt[j];
			app[seq[j]]++;
		}
	}
	for(int i = 1;i <= m;i++) {
		printf("%d ", app[i]);
	}
	return 0;
}
