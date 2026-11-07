#include<iostream>
int n,a[200005],m,ans;
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n; i ++) scanf("%d",a + i);
	for(int j = 30; j >= 0; j --) {
		int cnt = 0,tot = 0;
		for(int i = 1; i <= n; i ++)
			cnt += ((a[i] & (1 << j)) != 0);
		if(cnt >= m) {
			for(int i = 1; i <= n; i ++)
				if(a[i] & (1 << j)) a[++ tot] = a[i];
			n = tot,ans += (1 << j);
		}
	}
	printf("%d\n",ans);
	return 0;
}
