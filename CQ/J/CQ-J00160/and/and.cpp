#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll num[200005][33],vis[200005],sum[33],ans,a[200005];
void pus(ll k,ll i){
	ll cnt=0;
	while(k!=0){
		num[i][++cnt]=k&1;
		if(k&1==1)sum[cnt]++;
		k/=2;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		pus(a[i],i);
	}for(ll i=31;i>=1;i--){
		if(sum[i]>=m){
			for(ll j=1;j<=n;j++){
				if(num[j][i]==0){
					vis[j]=1;
					for(ll k=1;k<=31;k++){
						if(num[j][k]) sum[k]--;
						num[j][k]=0;
					}
				}
			}
		}
	}for(ll i=1;i<=n;i++){
		if(!vis[i]){
			ans==0?ans=a[i]:ans&=a[i];
		}
	}cout<<ans;
	return 0;
}
