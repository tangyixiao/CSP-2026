# include <cstdio>

# define maxn 200010
char c[maxn][10];
long long n, l, r, turn, cnt, a[maxn];

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	scanf("%lld", &n);

	for (long long i = 1; i <= n; i++)
		scanf("%lld %s", &a[i], c[i] + 1);

	l = 1, r = n;
	while (l < r) {
		turn = (a[l] > a[r] ? a[r] : a[l]);
		if (c[l][1] != c[r][1])
			cnt += turn;
		a[l] -= turn;
		a[r] -= turn;
		if (a[l] == 0)
			l ++;
		if (a[r] == 0)
			r --;
	}

	printf("%lld\n", cnt);

	fclose(stdin);
	fclose(stdout);

	return 0;

}
