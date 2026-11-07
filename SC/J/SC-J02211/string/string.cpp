#include <cstdio>
#define ll long long
#define N (int(2e5 + 10))

char c[N];
int n, i, j;
ll a[N], pre[N], sum[N], now, ans;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for(i = 1; i <= n; i ++)
		scanf("%lld %c", a + i, c + i), pre[i] = a[i] + pre[i - 1];
	for(i = n; i >= 1; i --)
		sum[i] = sum[i + 1] + a[i];
	for(i = now = 1, j = n; i < j; ){
		if(sum[j] < pre[i])
			ans += (c[i] != c[j]) * 1ll * (sum[j] - now + 1), now = sum[j] + 1, j --; 
		else if(sum[j] > pre[i])
			ans += (c[i] != c[j]) * 1ll * (pre[i] - now + 1), now = pre[i] + 1, i ++;
		else
			ans += (c[i] != c[j]) * 1ll * (pre[i] - now + 1), now = pre[i] + 1, i ++, j --;
	}
	printf("%lld\n", ans);
	return 0;
} 