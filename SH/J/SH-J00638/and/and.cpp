#include<bits/stdc++.h>
using namespace std;
long long a[200005],num[200005],vis[200005],n,m,ans,t;
void dfs(int x){
	if(x>m){
		t=a[num[1]];
		for(int i=2;i<=m;i++) t=t&a[num[i]];
		ans=max(ans,t);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
		vis[i]=1;
		num[x]=i;
		dfs(x+1);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];                                                                                                                                    
	if(m==1){
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans=ans&a[i];
	}else if(n<=20) dfs(1);
	else{
		ans=n-1,t=1;
		for(int i=0;i<m-1;i++){
			ans-=t;
			t*=2;
		}
	}
	cout<<ans<<"\n";
	return 0; 
}
