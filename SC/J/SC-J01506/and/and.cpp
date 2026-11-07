#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int b[N],a[N];
int n,m;
int ans=0;
void dfs(int x,int s,int cnt){
	if(cnt==m){
		ans=max(ans,s);
		return ;
	}
	if(x==n+1||s==0){
		return ;
	}
	for(int i=x;i<=n;i++){
		if(!b[i]){
			b[i]=1;
			dfs(x+1,s&a[i],cnt+1);
			b[i]=0;
		}
	}
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,INT_MAX,0); 
	cout<<ans<<'\n';
	return 0;
} 