#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll x[200200];
bool cmp(ll a,ll b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++)cin>>x[i];
	sort(x+1,x+1+n,cmp);
	ll ans=x[1];
	for(ll i=2;i<=m;i++){
		ans=ans&x[i];
	}
	cout<<ans<<endl;
	return 0;
}