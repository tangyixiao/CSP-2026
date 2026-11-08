#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[200005];
bool vis[25];
void dfs(int k){
	if(k==n+1){
		int nowans=0,cnt=0,f=0;
		for(int i=1;i<=n;i++){
			if(vis[i]==1){
				cnt++;
				if(f==0){
					f=1,nowans=a[i];
				}else nowans&=a[i];
			}
		}
		if(cnt==m)ans=max(ans,nowans);
		return;
	}
	vis[k]=1;
	dfs(k+1);
	vis[k]=0;
	dfs(k+1);
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=20){
		dfs(1);
		cout<<ans;
		return 0;
	}
	if(m==1){
		for(int i=1;i<=n;i++)ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++)ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}	
	sort(a+1,a+n+1);
	for(int i=n-1;i>=1;i--){
		if(a[n]&a[i]>a[n]){
			a[n]=a[n]&a[i];
		}
	} 
	cout<<a[n];
	return 0;
}
