#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],vis[200005];
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int k=m;
	for(int j=30;j>=0;j--){
		if(k==0) break;
		int num=0;
		for(int i=1;i<=n;i++){
			if(vis[i]) continue;
			if((a[i]&(1<<j))!=0){
				num++;
			}
		}
		if(num>=m){
			for(int i=1;i<=n;i++){
				if(vis[i]) continue;
				if((a[i]&(1<<j))==0){
					k--;
					vis[i]=1;
				}
			}
		}
	}
	k=0;
	int ans=-1;
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
		if(ans==-1){
			ans=a[i];
			k++;
		}else{
			ans&=a[i];
			k++;
		}
		if(k==m) break;
	}
	cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int t=1;
//	cin>>t;
	while(t--) solve();
	return 0;
}
//不会要死在T3了吧
//我是一个粉刷匠/sf
//直接最后一搏!!!!!!!!!!! 
