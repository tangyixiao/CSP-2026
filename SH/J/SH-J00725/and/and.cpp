#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],vis[25],ans,CF=1,TF=1;
void dfs(int sum,int u){
	if(u==m){
		ans=max(ans,sum);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i])return;
		vis[i]=1;
		dfs(sum&a[i],u+1);
		vis[i]=0;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
//		if(a[i]>=4){
//			TF=0;
//		}
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
				cout<<ans<<endl;
			}
		}
	}
	else if(m==n-1){
		//TODO
	}
//	else if(n<=20){
//		for(int i=1;i<=n;i++){
//			dfs(a[i],1);
//		}
//	}
	else{
		sort(a+1,a+n+1);
		ans=n-m;
	}
//	else if(TF==1){
//		for(int i=1;i<=n;i++){
//			
//		}
//	}
	cout<<ans<<endl;
}
