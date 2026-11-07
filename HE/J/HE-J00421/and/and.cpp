#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+10;
int n,m,a[N],ans;
void dfs(int cnt,int k,int u){
	if(k == m){
		ans = max(ans,cnt);
		return ;
	}
	if(u > n) return ;
	int c;
	if(cnt == 0)  c = a[u];
	else  c = cnt & a[u];
	dfs(c,k+1,u+1);
	dfs(cnt,k,u+1);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);		
	scanf("%lld%lld",&n,&m);
	int ma=0;
	for(int i = 1;i<=n;i++){
		scanf("%lld",&a[i]);
		ma = max(ma,a[i]);
	}
	if(m == 1){
		printf("%lld",ma);
		return 0;
	}
	dfs(0,0,1);
	printf("%lld",ans);
	return 0;
}
