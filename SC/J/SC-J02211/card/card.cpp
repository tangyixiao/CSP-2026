#include <cstdio>
#define N (int(5e5 + 10))

bool spc_a;
int a[N], table[N], id[N], b[N], ans[N], have[N], n, m, top, k, i, j;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m), spc_a = true;
	for(i = 1; i <= n; i ++)
		scanf("%d", a + i), spc_a &= (a[i] >= a[i - 1]);
	if(m <= 2){
		if(m == 1)
			printf("%d\n", n);
		else{
			for(i = 1; i <= n; i ++)
				if(a[i] != a[n])
					ans[1] ++, ans[2] ++;
				else
					ans[a[i]] ++;
			printf("%d %d\n", ans[1], ans[2]);
		}
	}
	else if(spc_a){
		for(i = 1; i <= n; i ++)
			id[a[i]] = i;
		for(i = 1; i < m; i ++)
			printf("%d ", id[i]);
		printf("%d\n", id[i]);
	}
	else{
		for(i = 1; i <= n; i ++)
			if(a[i] != a[i + 1])
				b[++ k] = a[i], id[k] = i;
		for(i = 1; i <= k; i ++){
			for(j = 1, top = 0; j <= n; j ++)
				have[j] = false;
			for(j = i; j <= k; j ++){
				if(have[b[j]])
					while(table[top] != b[j]) have[table[top]] --, top --;
				else
					table[++ top] = b[j], have[b[j]] ++;
			}
			for(j = 1; j <= top; j ++)
				ans[table[j]] += id[i] - id[i - 1];
		}
		for(i = 1; i < m; i ++)
			printf("%d ", ans[i]);
		printf("%d\n", ans[i]);
	}
	return 0;
}