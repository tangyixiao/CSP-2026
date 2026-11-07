#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[200005],ans;
//ll dfs(ll m,)
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}if(m==n){
		for(int i=1;i<=n;i++){
			ans=ans&a[i];
		}
	}else if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
				//cout<<(a[i]&a[j])<<' '<<i<<' '<<j<<'\n';
			}
		}
	}else if(m==n-1){
		for(int i=1;i<=n;i++){
			ll t=0;
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				t=t&a[j];
			}ans=max(ans,t);
		}
	}else{
		if(m==3){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						ans=max(ans,a[i]&a[j]&a[k]);
					}
				}
			}
		}
		if(m==4){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						for(int u=k+1;u<=n;u++){
							ans=max(ans,a[i]&a[j]&a[k]&a[u]);
						}
					}
				}
			}
		}if(m==5){
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					for(int k=j+1;k<=n;k++){
						for(int u=k+1;u<=n;u++){
							for(int v=u+1;v<=n;v++){
								ans=max(ans,a[i]&a[j]&a[k]&a[u]&a[v]);
							}
						}
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
}

