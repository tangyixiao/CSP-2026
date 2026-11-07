#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+100;
int n,m;
int a[N];
int ma;
void dfs(int x,int sum,int now){
	if(sum<ma) return;
	if(x==m){
		ma=max(sum,ma);
		return;
	}
	if(now+1<=n){
		dfs(x+1,(sum&a[now+1]),now+1);
		dfs(x,sum,now+1);
	}
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n-m+1;i++){
		dfs(1,a[i],i);
	} 
	printf("%lld",ma);
	return 0;
}
