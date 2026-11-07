#include<bits/stdc++.h>
#define gc() getchar()
#define pc(ch) putchar(ch)
#define END return fflush(stdout), fclose(stdin), fclose(stdout), 0
typedef long long ll;
// #undef STDIO
// #undef DEBUG
#ifdef DEBUG
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define debug(...)
#endif
const int N = 2e5 + 10;
int n, m, a[N], ans;
bool flg[N];
int main(){
	#ifndef STDIO
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		flg[i] = true;
	}
	for(int i = 30; i >= 0; i--){
		int cnt = 0;
		for(int j = 1; j <= n; j++){
			cnt += flg[j] && ((a[j] >> i) & 1);
		}
		if(cnt >= m){
			ans |= (1 << i);
			for(int j = 1; j <= n; j++){
				flg[j] &= ((a[j] >> i) & 1);
			}
		}
	}
	printf("%d\n", ans);
	END;
}