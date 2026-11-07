#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5;
ll n,m,a[N],wei[N][35],have[35],vis[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=30;i>=0;i--){
		for(ll j=1;j<=n;j++){
			if((a[j]&(1<<i))==(1<<i)){
				wei[j][i]=1;have[i]++;
			}
		}
	}
	ll ans=0;
	for(ll i=30;i>=0;i--){
		if(have[i]>=m){
			ans+=(1<<i);
			for(ll j=1;j<=n;j++){
				if(wei[j][i]==0 && vis[j]==0){
					vis[j]=1;
					for(ll k=30;k>=0;k--){
						if(wei[j][k]==1){
							have[k]--;
						//	cout<<"kill"<<i<<","<<"decrease"<<k<<endl;
						}
					}
				}
			}
		}	
	}
	cout<<ans;
	return 0;
}