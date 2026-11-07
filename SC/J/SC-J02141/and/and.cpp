#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m,a[N],ans;
bool vis[N];
bool tp=true;

int dfs(int idx,int cnt,int sum){
	if(cnt==m) return sum;
	
	int res=-1;
	vis[idx]=true;
	for(int i=1;i<=n;i++){
		if(!vis[i]) res=max(res,dfs(i,cnt+1,sum&a[i]));
	}
	vis[idx]=false;
	return res;
} 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%lld",&a[i]);
		if(((a[i]+1)&a[i])!=0) tp=false;
	} 
	
	if(tp){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0; 
	} 
	 
	for(int i=1;i<=n;++i) ans=max(ans,dfs(i,1,a[i]));
	printf("%lld",ans);
	return 0;
}