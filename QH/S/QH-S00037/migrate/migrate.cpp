#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=20005;
ll a[MAXN];

int main(){
	
	freopen("migrate.in","r",stdin);
	freopen("migrate.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll c,t;
	cin>>c>>t;
	for(int i=1;i<=t;i++){
		ll n,d;
		cin>>n>>d;
		cin>>a[1]>>a[2]>>a[3];
		for(int i=4;i<=n-1;i++)cin>>a[4];
		cin>>a[5];
		ll maxc=a[5]-a[1];
		if(d>maxc){
			cout<<0<<"\n";
			continue;
		}
		
		ll c=a[2]-a[1];
		if(d<(c<<1)){
			cout<<0<<"\n";
			continue;
		}
		if(d>=3*c){
			cout<<n-5<<"\n";
			continue;
		}
		cout<<n-3<<"\n";
			
		
		
	}
	
	return 0;
}
