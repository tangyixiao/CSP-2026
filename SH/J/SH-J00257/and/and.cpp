#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll a[200005];
bool fl[200005],tfl[200005];
ll ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++)cin>>a[i],fl[i]=1;
	for(ll i=30;i>=0;i--){
		for(ll j=1;j<=n;j++)tfl[j]=0;
		ll cnt=0;
		for(ll j=1;j<=n;j++)if(fl[j]&&(a[j]&(1<<i)))tfl[j]=1,cnt++;
		if(cnt>=m){
			for(ll j=1;j<=n;j++)fl[j]=tfl[j];
			ans|=(1<<i);
		}
	}
	cout<<ans<<endl;
	return 0;
}

