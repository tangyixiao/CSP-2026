#include<iostream>
const int N = 2e5 + 5;
char s[N];
int a[N],n;
long long ans;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i = 1; i <= n; i ++)
		scanf("%d %c",a + i,s + i);
	int j = n;
	for(int i = 1; i < j; i ++) {
		while(a[j] <= a[i] && j >= i)
			a[i] -= a[j],ans += (s[i] != s[j]) * a[j],j --;
		a[j] -= a[i],ans += a[i] * (s[i] != s[j]),a[i] = 0;
	}
	printf("%lld\n",ans);
	return 0; 
}
