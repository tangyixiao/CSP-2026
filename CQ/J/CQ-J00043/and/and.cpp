#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;
int n,m,a[200005],f[200005],ans;
void dfs(int x,int sum){
	if(x==m){ans=max(ans,sum);return;}
	for(int i=1;i<=n;i++){
		if(!f[i]){
			f[i]=1;
			dfs(x+1,sum&a[i]);
			f[i]=0;
		}
	}	
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    scanf("%lld %lld",&n,&m);
    for(int i=1;i<=n;i++) scanf("%lld",a+i);
    for(int i=1;i<=n;i++){
    	f[i]=1;dfs(1,a[i]);f[i]=0;
	}
	printf("%lld",ans);
	return 0;
}


