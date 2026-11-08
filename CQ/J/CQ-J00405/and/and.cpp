#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200100];
int dp[200000];
bool flag[200000];
int ans = -1;
int mx = -1;
void dfs(int i,int j,int now){
	if(i == n + 1 && j == m + 1){
		ans = max(now,ans);
		return ;
	}
	if(i == n + 1) return ;
	dfs(i + 1,j + 1,now & a[i]);
	dfs(i + 1,j,now);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		mx = max(mx,a[i]);
	}
	if(m == 1) ans = mx;
	else{
		for(int i = 1;i <= n;i++){
			dfs(i,1,a[i]);
		}
	}
//	dfs(0,0,0);
	printf("%d",ans);
	return 0;
}
