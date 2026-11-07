#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	ll maxx=-0x3f;
	sort(a+1,a+n+1);
	for(ll i=m;i<=n;i++){
		ll ands=a[i];
		for(int j=1;j<=m-1;j++){
			ands&=a[i-j];
		}
		maxx=max(maxx,ands);
	}
	cout<<maxx;
	return 0;
}
