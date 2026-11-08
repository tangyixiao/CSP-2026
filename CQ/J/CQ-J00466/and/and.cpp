#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
namespace CSPJ{
	int n,m;
	int a[200005];
	bool vis[200005];
	void solve(){
		cin>>n>>m;
		for(int i=1;i<=n;i++)cin>>a[i];
		int ans=0;
		for(int _=30;_>=0;_--){
			int cnt=0;
			for(int i=1;i<=n;i++){
				if(vis[i])continue;
				if((a[i]>>_)&1)cnt++;
			}
			if(cnt>=m){
				ans+=(1<<_);
				for(int i=1;i<=n;i++){
					if(vis[i])continue;
					if(!((a[i]>>_)&1))vis[i]=1;
				}
			}
		}
		cout<<ans;
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int Q=1;
//	cin>>Q;
	while(Q--)CSPJ::solve();
//while(1);
	return 0;
}
/*
ÍòÊ¥½ÚÃÜÂë£ºTrick||Treat!
s MB
s MB
*/

