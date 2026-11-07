#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll a[500005];
ll tmp[500005],nxt[500005];
ll ans[500005];
bool f[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=n;i>=1;i--){
		if(!tmp[a[i]])
			tmp[a[i]]=i;
		nxt[i]=tmp[a[i]];
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++)f[j]=0;
		for(ll j=i;j<=n;j++){
			f[a[j]]=1;
			j=nxt[j];
		}
		for(ll j=1;j<=m;j++)ans[j]+=(ll)f[j];
	}
	for(ll i=1;i<=m;i++)cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}
