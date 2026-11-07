#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5, M = N, K = 3e1+5;
int n, m, ans, a[N], mc = INT_MIN, sta[N], stb[N];
char b[N][K];
int  ccnt = 0, cstart = 1;

//struct line {
//	int weight, nxt;
//} c[N];

//int dfs(int x,int p){
//	if (c[x].nxt)return 0;
//	return b[c[x].weight][p]+dfs(c[x].nxt);
//}
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", a + i);
//		c[i] = {i, i + 1};
	}
//	c[n].nxt = 0;
	sort(a + 1, a + 1 + n);
	for (int i = 1; i <= n; i++) {
		int num = a[i], cnter = 0;
		while (num != 0) {
			b[i][++cnter] = num & 1;
			num >>= 1;
		}
		b[i][0] = cnter;
		mc = max(mc, cnter);
		sta[++*sta] = i;
	}
	for (int i = mc; i >= 1; i--) {
//		int paa=dfs(cstart,i);
//		if(paa<m)continue;
//		for(int j=cstart;j;j=c[j].nxt){
//			int pla=c[j].weight;
//
//		}
		int paa = 0;
		for (int j = 1; j <= *sta; j++) {
			paa += b[sta[j]][i];
		}
		if (paa < m) {
			continue;
		}
		ans += 1 << (i - 1);
		*stb = 0;
		while (*sta) {
			if (b[sta[*sta]][i])
				stb[++*stb] = sta[*sta];
			--*sta;
		}
		while (*stb) {
			sta[++*sta] = stb[*stb];
			--*stb;
		}
	}
	printf("%d\n", ans);
	/*
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= b[i][0]; j++) {
			printf("%d", b[i][j]);
		}
		printf(" ");
	}
	*/
	return 0;
}
