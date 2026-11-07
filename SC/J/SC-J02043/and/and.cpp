#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
typedef long long ll;
using namespace std;
ll n,m,ans;bool wt[200001][32],vis[200001];
int main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;for(ll i=1;i<=n;i++){
		ll ss;cin>>ss;
		ll idx=0;
		while(ss)wt[i][idx]=ss%2,ss/=2,idx++;
	}
	for(ll j=31;j>=0;j--){
		ll x0=0,x1=0;ans*=2;
		for(ll i=1;i<=n;i++){
			if(vis[i])continue;
			if(wt[i][j])x1++;
			else x0++;
		}
		if(x1>=m){
			ans++;
			for(ll i=1;i<=n;i++)if(!wt[i][j])vis[i]=true;
		}
	}
	cout<<ans<<endl;
	return 0;
}