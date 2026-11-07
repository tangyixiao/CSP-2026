#include<bits/stdc++.h>
using namespace std;
const int N=2e5+50;
int n,m;
long long a[N],ma,ann,ans;
void dfs(int xzgs,int nz,long long zqda){
	if(xzgs==m){
		ans=max(ans,zqda);
		return ;
	}
	for(int i=nz+1;i<=n;i++){
		if(xzgs==0) dfs(xzgs+1,i,a[i]);
		else dfs(xzgs+1,i,zqda&a[i]);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
    	scanf("%lld",&a[i]);
    	ma=max(ma,a[i]);
    	if(i==1) ann=a[i];
    	ann=ann&a[i];
	}
	if(m==1){
		printf("%lld",ma);
	}
	else if(m==n){
		printf("%lld",ann);
	}
	else{
		dfs(0,0,0);
		printf("%lld",ans);
	}
	return 0;
}
