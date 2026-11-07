#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[200010];
int vis[200010];
int ret[200010];
int mx;
void dfs(int now,int cnt){
	if(now>n){
		if(cnt==m){
			int ans=0;
			for(int i=1;i<=n;++i){
				if(vis[i]==1){
					if(ans==0){
						ans=a[i];
					}else{
						ans&=a[i];
					}
				}
				//cout<<vis[i]<<" ";
			}
			//cout<<ans<<"\n";
			mx=max(mx,ans);
		}
		return;
	}
	//for(int i=1;i<=n;++i){
		if(vis[now]==0){
			vis[now]=1;
			dfs(now+1,cnt+1);
			vis[now]=0;
			dfs(now+1,cnt);
		}
	//}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(n<=20){
		dfs(1,0);
		cout<<mx;
	}else if(m==1){
		for(int i=1;i<=n;++i){
			mx=max(mx,a[i]);
		}
		cout<<mx;
	}else if(m==2){
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				if(i!=j)mx=max(mx,a[i]&a[j]);
			}
		}
		cout<<mx;
	}else if(m==n){
		mx=a[1];
		for(int i=1;i<=n;++i){
			mx&=a[i];
		}
		cout<<mx;
	}else if(m==n-1){
		mx=a[1];
		for(int i=1;i<=n;++i){
			mx&=a[i];
		}
		for(int i=1;i<=n;++i){
			mx|=a[i];
		}
		cout<<mx;
	}
	return 0;
}
