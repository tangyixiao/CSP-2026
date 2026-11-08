#include<bits/stdc++.h>
using namespace std;

int c, n, m, d, Q, k[20], w[20], a[20][20], t[20][20];

int main(){
	freopen("subway.in", "r", stdin);
	freopen("subway.out", "w", stdout);
	scanf("%d%d%d%d%d", &c, &n, &m, &d, &Q);
	for(int i = 1; i <= n; i++){
		scanf("%d", &k[i]);
		for(int j = 1; j <= k[i]; j++)
			scanf("%d%d", &a[i][j], &t[i][j]);
	}
	while(Q--){
		int x, y;
		scanf("%d%d", &x, &y);
		int ans = w[x] + w[y];
		int d[20][20];
		for(int i = 1; i <= m; i++)
			for(int j = 1; j <= m; j++)
				d[i][j] = 1 << 29;
		
		
		
	}
	return 0;
}
