#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+10;
int a[N],sum[35],vis[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){vis[i]=1;
		for(int j=0;j<=30;j++) if(a[i]&(1<<j)) sum[j]++;
 	}int ans=0;
	for(int i=30;i>=0;i--){
		if(sum[i]>=m){
			ans+=(1<<i);
			for(int j=1;j<=n;j++){
				if(vis[j]&&!(a[j]&(1<<i))){
					for(int k=0;k<=30;k++) if(a[j]&(1<<k)) sum[k]--;
				}
				vis[j]=(vis[j]&&(a[j]&(1<<i)));
			}
		}
	}cout<<ans;
	return 0;
}/*
What do you see before it's over
Blinding flash is getting closer
Wish there's something left to lose
It's could be the day I die for you
*/