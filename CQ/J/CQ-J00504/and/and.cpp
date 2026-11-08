#include<bits/stdc++.h>
using namespace std;
namespace zjp{
	const int N=2e5,LN=29;
	int n,m;
	int a[N+5];
	bool vis[N+5];
	signed main(){
		ios::sync_with_stdio(false);
		cin.tie(0);cout.tie(0);
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[i];
		int ans=0;
		for(int i=LN;i>=0;i--){
			int cnt=0;
			for(int j=1;j<=n;j++){
				if(vis[j]) continue;
				if(a[j]&(1<<i)) ++cnt;
			}
			if(cnt>=m){
				for(int j=1;j<=n;j++){
					if(vis[j]) continue;
					if((a[j]&(1<<i))==0) vis[j]=1;
				}
				ans|=(1<<i);
			}
		}
		cout<<ans;
		return 0;
	} 
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	return zjp::main();
}	
