#include<bits/stdc++.h>
using namespace std;
int a[200005],usd[25],mx=-1e9;
int n,m;
void dfs(int now,int sum){
	if(now==n+1&&sum==m){
		bool ok=1;
		int ans=0;
		for(int i=1;i<=n;i++){
			if(usd[i]==1){
				if(ok==1){
					ok=0;
					ans=a[i];
				}else{
					ans&=a[i];
				}
			}
		}mx=max(mx,ans);
		return ;
	}if(now>=n+1) return ;
	if(sum>m) return ;
	dfs(now+1,sum);
	usd[now]=1;
	dfs(now+1,sum+1);
	usd[now]=0; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==m){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}cout<<ans;
		return 0;
	}if(m==1){
		int ans=-1e9;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}cout<<ans;
		return 0;
	}if(m==2){
		int ans=-1e9;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}cout<<ans;
		return 0;
	}if(m==n-1){
		int ans=-1e9;
		for(int i=1;i<=n;i++){
			int h=a[1];
			if(i==1) h=a[2];
			for(int j=1;j<=n;j++){
				if(j!=i){
					h&=a[j];
				}
			}ans=max(ans,h);
		}cout<<ans;
		return 0;
	}
	dfs(1,0);
	cout<<mx;
}