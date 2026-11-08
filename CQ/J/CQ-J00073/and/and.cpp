#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,m;
ll a[200005],f[200005],maxx=-1;
bool vis[200005];

void dfs(int x,ll y){
	if(x==m){
		maxx=max(maxx,y);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		vis[i]=1;
		dfs(x+1,a[i]&y);
		vis[i]=0;
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	
	cin>>n>>m;
	bool l=(bool)(m==n);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[i]=f[i-1]&a[i];
		if(i==1)f[i]=a[i];	
	}
	if(l){
		cout<<f[n];
		return 0;
	}
	if(m==n-1){
		ll u1=0;
		for(int i=1;i<=n;i++){
			ll u=0;
			for(int j=1;j<=n;j++){
				if(j==i)continue;
				
				if(u==0){
					u=a[j];	
				}
				else{
					u=u&a[j];
				} 
			}
			u1=max(u1,u);
		}
		cout<<u1;
		return 0;
	}
	if(n<=2000){
		for(int i=1;i<=n;i++){
			vis[i]=1;
			dfs(1,a[i]);
			vis[i]=0;
		}
		cout<<maxx;
	}else{
		sort(a+1,a+n+1);
		for(int i=n-1;i>=n-m+1;i--){
			a[n]=a[n]&a[i];
		}
		cout<<a[n];
	}
	return 0;
}

