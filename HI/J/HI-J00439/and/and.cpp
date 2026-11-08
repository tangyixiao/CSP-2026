#include <bits/stdc++.h>
using namespace std;
long long n,m,maxn,maxa,ans;
long long a[200010];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	for(int i=1; i<=n; i++) {
		scanf("%lld",&a[i]);
		maxn=max(maxn,a[i]);
	}
	ans=maxn;
	maxn=-2e9;
	for(int j=1; j<=m; j++) {
		for(int i=1; i<=n; i++) {
			if(maxn<a[i]) {
				maxn=a[i];
				maxa=i;
			}
		}
		ans=(maxn&ans);
		a[maxa]=-1;
		maxn=-2e9;
	}
	printf("%lld",ans);
	return 0;
}
