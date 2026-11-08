#include<bits/stdc++.h>
using namespace std;
int n,m,a[200050],dp[200050],maxn,ans;
int dfs(int x,int y){
	if(x==m){
		for(int i=y;i<=n;i++){
			return a[y];
		}  
	}
	for(int i=y;i<=n-m+x;i++){
		ans=max(ans,a[y]&dfs(x+1,i+1));
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
		if(i==1){
			ans=a[i];
		}else ans=(ans&a[i]);
	}
	if(m==1){
		cout<<maxn<<"\n";
		return 0;
	}
	if(m==n){
		cout<<ans<<"\n";
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans<<"\n";
		return 0;
	}
	ans=0;
	cout<<dfs(1,1)<<"\n";
	return 0;
} 
