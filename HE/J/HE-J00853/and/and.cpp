#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long ans=1073741823;
int n,m;
bool vis[200005];
void dfs(int f,int x,long long sum){
	if(x==m){
		ans=max(ans,sum);
		return;
	} 
	if(f>n) return;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(f+1,x+1,sum&a[i]);
			vis[i]=0;
		}
		dfs(f+1,x,sum);
	}
}
int main(){
	//Trick||Treat!
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(m==1){
				ans=max(ans,a[i]);
			}
		}	
	}
	else if(m==n){
		for(int i=1;i<=n;i++){
			if(m==n){
				ans&=a[i];
			}
		}
	}
	else if(m==2){
		ans=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
	else {
		ans=0;
		dfs(1,0,1073741823);
	}
	cout<<ans;
	return 0;
}
