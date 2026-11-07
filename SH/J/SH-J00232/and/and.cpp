#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 * 2 + 10;
int n, m, a[maxn], ans, maxx;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		if(i == 1){
			ans = a[i];
			maxx = a[i];
		}else{
			ans &= a[i];
			maxx = max(maxx, a[i]);
		}
	}
	if(n == m){
		printf("%d\n", ans);
		return 0;
	}
	else if(m == 1){
		printf("%d\n", maxx);
		return 0;
	}
//	printf("input\n");
	sort(a + 1, a + n + 1, cmp);
//	printf("sort\n");
	ans = a[1];
	for(int i = 2; i <= m; i++){
		ans &= a[i];
	}
	printf("%d\n", ans);
	return 0;
}
