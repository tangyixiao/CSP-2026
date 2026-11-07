#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll b[1000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n,m;cin>>n>>m;
	ll a[n+5];
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	ll x[n+5];
	for(ll i=1;i<=n;i++) x[i]=a[i];
	for(ll i=1;i<=n;i++){//组
		for(ll zgh=1;zgh<=n;zgh++) a[zgh]=x[zgh];
		for(ll j=i;j<=n;j++){//每组的数组
			for(ll k=j;k<=n;k++){
				for(ll l=k+1;l<=n;l++){//找
					if(a[k]==a[l]){
						for(ll x=k;x<l;x++) a[x]=-1;//标为-1
					}
				}
			}
		}
		for(ll zzz=i;zzz<=n;zzz++){
			b[a[zzz]]++;
		}
	}
	for(ll i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
}