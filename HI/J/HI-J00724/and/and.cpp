#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	ll ans=0;
	for(int i=1;i<=n;i++){
		ll x;cin>>x;
		ans=max(ans,x);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
