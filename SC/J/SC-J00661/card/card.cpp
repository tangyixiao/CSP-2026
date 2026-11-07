#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5;
int n,m;
int a[N],fi[N],star[N],ans[N],cnt[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		star[i]=fi[a[i]],fi[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int ygg=i;
		ans[i]++;//ans[n+1]--;
		for(int j=i;j<=n;j++){
			if(star[j]<ygg) continue;
			ans[max(star[j],ygg)]--,ans[j]++;
			ygg=j;
			//ans[j]++;
		}
	}
	for(int i=1;i<=n;i++){
		ans[i]+=ans[i-1];
		cnt[a[i]]+=ans[i];
	}
	for(int i=1;i<=m;i++){
		printf("%lld ",cnt[i]);
	}
	return 0;
}
