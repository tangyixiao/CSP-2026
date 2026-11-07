#include<bits/stdc++.h>
using namespace std;
int n,a[200003],m,dp[200003],ans;
void p(int cnt,int x,int i,int k){
	if(cnt==m) {
		dp[i]=max(dp[i],x);
		return ;
	}
	for(int j=k;j<=n;j++){
		long long xx=x&a[j];
		p(cnt+1,xx,i,j+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		p(1,a[i],i,i+1);
		ans=max(ans,dp[i]);
	}
	printf("%d",ans);
	return 0;
}