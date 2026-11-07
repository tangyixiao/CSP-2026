#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200010],ans=-1,vis[200010],tmpans;
void dfs(int x){
	if(x==m+1){
		ans=max(tmpans,ans);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i] =1;
			tmpans=tmpans&a[i];
		//	vis[i]=0;
			dfs(x+1);
			//vis[i]=0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	else if(m==n){
		ans=a[1]&a[2];
		for(int i=3;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	
	else if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int k=1;k<=n;k++){
				
				if(i==j||i==k||k==j)continue;
				ans=max(ans,a[i]&a[j]&a[k]);
			}
			}
		}
		cout<<ans;
		return 0;
	}else if(m==4){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int k=1;k<=n;k++){
				for(int l=1;l<=n;l++){
				}
				if(i==j||i==k||k==j||i==l||j==l||k==l)continue;
				ans=max(ans,a[i]&a[j]&a[k]&a[l]);
			}
			}
			}
		}
		cout<<ans;
		return 0;
	}
	if(n<=5000){
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof (vis));
		vis[i]=1;
		tmpans=a[i];
		dfs(2);
	}
	cout<<ans;
	
	return 0;
	}
	cout<<1;
	
	
	
	return 0;
}
