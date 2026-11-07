# include <cstdio>

# define maxn 500010
int n, m, a[maxn], nxt[maxn], sum[maxn], cnt[maxn], pre[maxn];

int main() {

	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		nxt[a[i]] = i;
	}

	for (int i = 1; i <= n; i++)
		sum[nxt[a[i]]] ++;

	for (int i = 1; i <= n; i++) {
		sum[i] += sum[i - 1];
		if (nxt[a[i - 1]] != i - 1)
			pre[i] = i - 1;
		else
			pre[i] = pre[i - 1];
	}

	for (int i = 1; i <= n; i++)
		cnt[a[i]] += sum[i - 1] - sum[pre[i]] + 1;

	for (int i = 1; i <= m; i++)
		printf("%d ", cnt[i]);
	printf("\n");

	fclose(stdin);
	fclose(stdout);

	return 0;

}
