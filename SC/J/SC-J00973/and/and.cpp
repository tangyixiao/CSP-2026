#include<bits/stdc++.h>
#define int long long
using namespace std;
int m,n,a[200001],ans,vis[21];
bool flag=1;
void dfs(int step,int sum){
	if(step>m){
		ans=max(ans,sum);
		return ;
	}
	for(int i = 1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			dfs(step+1,sum&a[i]);
			vis[i]=0;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1){
			flag=0;
		}
	}
	if(n<=20){
		for(int i = 1;i<=n;i++){
			vis[i]=1;
			dfs(1,a[i]);
			vis[i]=0;
		}
		cout<<ans;
		return 0;
	} 
	if(m==2){
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		for(int i = 1;i<=n;i++){
			ans&=a[i];
		} 
		cout<<ans;
		return 0;
	} 
	if(flag){
		sort(a+1,a+n+1);
		for(int i = n-1;i>=1;i--){
			if(a[i]!=a[i+1]){
				cout<<a[i];
				break;
			}
		}
		return 0;
	}
	for(int i = 1;i<=n;i++){
		ans=max(ans,a[i]);
	}
	cout<<ans;
	return 0;	
}