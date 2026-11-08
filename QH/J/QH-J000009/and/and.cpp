#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200010],Ans=-1;
bool vis[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}else if(m==n){
		int ans;
		for(int i=1;i<=n;i++){
			if(i==1){
				ans=a[i];
			}else ans=ans&a[i];
		}
		cout<<ans;
	}else if(m==n-1){
		int ans;
		for(int i=1;i<=n-1;i++){
			if(i==1){
				ans=a[i];
			}else ans=ans&a[i];
		}
		int ans1;
		for(int i=2;i<=n;i++){
			if(i==2){
				ans1=a[i];
			}else ans1=ans1&a[i];
		}
		cout<<max(ans1,ans);
	}else if(m==2){
		long long ans=-1;
		for(int i=1;i<=n-1;i++){
			ans=max(ans,a[i]&a[i+1]);
		}
		cout<<ans;
	}
	return 0;
}
