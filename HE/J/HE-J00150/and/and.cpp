#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,sum=1,a[N],cnt[4],mx,s=0;
bool flag,flagb=1,flaga=1,vis[N];
void dfs(int k,int m,int now){
	if(k==m){
		s=max(s,now);
		return;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			dfs(k+1,m,now&a[i]);
			vis[i]=0;
		}
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		sum*=2;
		cin>>a[i];
		if(a[i]<=3){
			cnt[a[i]]++;
		}
		mx=max(mx,a[i]);
		if(a[i]!=(sum-1)) flaga=0;
		if(a[i]!=i-1) flagb=0;
	}
	if(flaga==1){
		cout<<a[n-m+1];
		return 0;
	}
	if(flagb==1){
		int ans=a[n];
		for(int i=n-1;i>=n-m+1;i--) ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		int ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans;
		return 0;
	}
	if(mx<=3){
		if(cnt[3]>=m){
			cout<<3;
			return 0;
		}
		if(cnt[2]+cnt[3]>=m){
			cout<<2;
			return 0;
		}
		if(cnt[3]+cnt[1]>=m){
			cout<<1;
			return 0;
		}
		cout<<0;
		return 0;
	}
	dfs(0,m,2097151);
	cout<<s;
	return 0;
}
