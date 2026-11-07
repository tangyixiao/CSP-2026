#include<bits/stdc++.h>
#define ll int64_t
#define endl '\n'
using namespace std;
ll n,m,a[200000+10],ejz[200000+10][30],hh[30],ans=0;
bool vis[200000+10];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	hh[0]=1;
	for(ll i=1;i<=29;i++) hh[i]=hh[i-1]*2;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		ll cnt=29,op=hh[29];
		while(a[i]){
			if(a[i]>=op){
				a[i]-=op;
				ejz[i][cnt]=1;
			}
			cnt--;
			op/=2;
		}
	}
	for(ll i=29;i>=0;i--){
		ll h=0;
		for(ll j=1;j<=n;j++) if(!vis[j] && ejz[j][i]==1) h++;
		if(h>=m){
			ans+=hh[i];
			for(ll j=1;j<=n;j++) if(ejz[j][i]==0) vis[j]=true;
		}
	}
	cout<<ans;
	return 0;
}