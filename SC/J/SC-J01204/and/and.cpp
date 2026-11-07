#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N][32],mx;
bool vis[N];
long long ans,pre[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	pre[0]=1;
	for(int i=1;i<=31;i++){
		pre[i]=pre[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		int cnt=-1;
		while(x){
			a[i][++cnt]=x%2;
			x/=2;
		}
		mx=max(mx,cnt);
	}
	int flag=0;
	for(int i=mx;i>=0;i--){
		int cnt=0;
		if(flag==0){
			for(int j=1;j<=n;j++){
				if(a[j][i]) cnt++;
			}
			if(cnt>=m){
				for(int j=1;j<=n;j++){
					if(a[j][i]) vis[j]=1;
				}
				flag=1;
				ans+=pre[i];
			}
			continue;
		}
		for(int j=1;j<=n;j++){
			if(vis[j]&&a[j][i]) cnt++;
		}
		if(cnt>=m){
			for(int j=1;j<=n;j++){
				if(!vis[j]) continue;
				if(a[j][i]==0) vis[j]=0;
			}
			ans+=pre[i];
		}
	}
	cout<<ans;
	return 0;
}
