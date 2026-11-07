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
const int N = 1e6 + 10;
struct seq{
	ll x;
	char c;
}a[N], b[2][N];
std::vector<seq> v[2];
int k, n;
ll m, ans, val[N];
int main(){
	#ifndef STDIO
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	#endif
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%lld %c", &a[i].x, &a[i].c);
		m += a[i].x;
	}
	ll sum = 0;
	for(int i = 1; i <= n; i++){
		sum += a[i].x;
		if(sum >= ((m + 1) >> 1)){
			if(m & 1){
				a[i].x--;
				m--;
			}
		}
	}
	sum = 0;
	for(int i = 1; i <= n; i++){
		sum += a[i].x;
		if(sum >= (m >> 1)){
			v[0].emplace_back(seq{a[i].x - (sum - (m >> 1)), a[i].c});
			v[1].emplace_back(seq{(sum - (m >> 1)), a[i].c});
			for(int j = i - 1; j >= 1; j--){
				v[0].emplace_back(a[j]);
			}
			for(int j = i + 1; j <= n; j++){
				v[1].emplace_back(a[j]);
			}
			break;
		}
	}
	sum = 0;
	for(seq s : v[0]){
		sum += s.x;
		val[++k] = sum;
		// debug("v[0]: {%d, %c}\n", s.x, s.c);
	}
	sum = 0;
	for(seq s : v[1]){
		sum += s.x;
		val[++k] = sum;
		// debug("v[1]: {%d, %c}\n", s.x, s.c);
	}
	// return 0;
	std::sort(val + 1, val + k + 1);
	sum = v[0][0].x;
	for(int i = 1, ptr = 0; i <= k; i++){
		// debug("i = %d, ptr = %d, val = %d\n", i, ptr, val[i]);
		while(sum < val[i]){
			// debug("ptr %d -> %d\n", ptr, ptr + 1);
			ptr++;
			sum += v[0][ptr].x;
		}
		b[0][i] = seq{val[i] - val[i - 1], v[0][ptr].c};
	}
	// return 0;
	sum = v[1][0].x;
	for(int i = 1, ptr = 0; i <= k; i++){
		while(sum < val[i]){
			ptr++;
			sum += v[1][ptr].x;
		}
		b[1][i] = seq{val[i] - val[i - 1], v[1][ptr].c};
	}
	for(int i = 1; i <= k; i++){
		if(b[0][i].c != b[1][i].c){
			ans += b[0][i].x;
		}
	}
	printf("%lld\n", ans);
	END;
}