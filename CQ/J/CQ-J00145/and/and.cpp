#include<bits/stdc++.h>
using namespace std;
const int MXN=200010;
int n,m,a[MXN],ans=0;
void dfs(int stp,int cnt,int sum){
	// printf("%d %d %d\n",stp,cnt,sum);
	if(cnt>m) return;
	if(cnt+n-stp+1<m) return;
	if(stp>n){
		ans=max(ans,sum);
		return;
	}
	dfs(stp+1,cnt,sum);
	dfs(stp+1,cnt+1,sum&a[stp]);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	int lim=((1<<30)-1);
	if(m==1){
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
	}
	else if(m==n){
		ans=lim;
		for(int i=1;i<=n;i++) ans&=a[i];
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
	else if(n<=20) dfs(1,0,lim);
	printf("%d",ans);
	return 0;
}
