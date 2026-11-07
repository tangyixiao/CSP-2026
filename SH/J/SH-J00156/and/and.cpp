#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int ans;
void dfs(int k,int cnt,int sum){
	if(k==n+1){
		if(cnt==m)ans=max(ans,sum);
		return;
	}
	if(sum==-1)dfs(k+1,cnt+1,a[k]);
	else dfs(k+1,cnt+1,sum&a[k]);
	dfs(k+1,cnt,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		for(int i=1;i<=n;i++){
			if(i==1)ans=a[i];
			else ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	dfs(1,0,-1);
	cout<<ans;
	return 0;
}
