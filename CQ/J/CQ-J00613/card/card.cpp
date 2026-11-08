#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=5e5+5;
ll n,m;
ll a[N];
ll ta[N];
ll ans[N];
map<ll,ll> nm;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=1;i<=n;i++){
		ll l=1,r=0;
		memset(ta,0,sizeof(ta));
		nm.clear();
		for(ll j=i;j<=n;j++){
			if(ta[nm[a[j]]]==a[j]&&l<=nm[a[j]]&&nm[a[j]]<=r){
				r=nm[a[j]];
			}else{
				ta[++r]=a[j];
				nm[a[j]]=r;
			}
		}
		for(ll k=l;k<=r;k++){
			ans[ta[k]]++;
		}
	}
	for(ll i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m)cout<<' ';
		else cout<<'\n';
	}
	
	return 0; 
}
