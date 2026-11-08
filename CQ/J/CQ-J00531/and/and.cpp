#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5;
int n,m,a[N+5],ans=0;
bool vis[N+5];//0 Î´ÅÅ³ý 
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=29;i>=0;i--){
		int s=(1ll<<i);
		int cnt=0;
		for(int j=1;j<=n;j++) if(!vis[j]&&((a[j]&s)>0)) cnt++;
		if(cnt>=m){
			ans|=s;
			for(int j=1;j<=n;j++) if(!(a[j]&s)) vis[j]=1;
		}
	}
	cout<<ans;
	return 0;
}
