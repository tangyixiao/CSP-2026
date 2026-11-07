#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
bool vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		int ans=0;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	int cnt=0,ans=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]&a[j]>cnt){
				cnt=a[i]&a[j];
				memset(vis,0,sizeof vis);
				vis[i]=1;
				vis[j]=1;
			}
		}
	}
	m-=2;
	while(m--){
		for(int i=1;i<=n;i++){
			if(vis[i]){
				continue;
			}
			ans=max(ans,cnt&a[i]);
		}
		cnt=ans;
		ans=0;
	}
	cout<<cnt;
	return 0;
} 