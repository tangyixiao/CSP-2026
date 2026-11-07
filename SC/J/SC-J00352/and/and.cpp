#include<bits/stdc++.h>
#define N 200005
#define int long long
#define endl '\n'
using namespace std;

int n,m,a[N],ans,tmp[N],cnt;

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	freopen("and.in","r",stdin);
//	freopen("and_my.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int u=31;u>=0;u--){
		cnt=0;
		for(int i=1;i<=n;i++){
			if((a[i]>>u)&1) tmp[++cnt]=a[i];
		}
//		printf("tiaoshi:%d",cnt);
		if(cnt<m) continue;
		ans|=(1<<u);
		memcpy(a,tmp,sizeof(a));
		n=cnt;
	}
	printf("%lld",ans);
	return 0;
}//知颖你太美