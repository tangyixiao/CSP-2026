#include <cstdio>
#define M 40
#define N (int(2e5 + 10))

bool have[M][N], x[N];
int a[N], n, m, ans, cnt, i, j;

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(i = 1; i <= n; i ++){
		scanf("%d", a + i), x[i] = true;
		for(j = 29; j >= 0; j --)
			if(a[i] & (1 << j))
				have[30 - j][i] = true;
	}
	for(i = 1; i <= 30; i ++){
		for(j = 1, cnt = 0; j <= n; j ++)
			cnt += (x[j] && have[i][j]);
		ans <<= 1;
		if(cnt >= m){
			ans ++;
			for(j = 1; j <= n; j ++)
				x[j] &= have[i][j];
		}
	}
	printf("%d\n", ans);
	return 0;
}