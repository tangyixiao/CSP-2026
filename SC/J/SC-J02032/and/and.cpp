#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m,a[200005],cnt[35],vis[200005],ans=0;
void check(int x){
	if(cnt[x]>=m){
		int sum=0;
		for(int i=1;i<=n;i++){
			if(vis[i]) continue;
			if((int)(a[i]&(1<<x))==0){
				vis[i]=1;
				continue;
			}
			sum++;
		}
		if(sum>=m) ans+=(1<<x);
	}
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			int pw=1<<j;
			if((int)(a[i]&pw)){
				cnt[j]++;
			}
		}
	}
	for(int i=30;i>=0;i--){
		check(i);
	}
	cout<<ans;
	return 0;
}