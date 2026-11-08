#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 500005;
ll a[MAXN];


int main(){
	
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	ll d=a[2]-a[1],ans=0,sumd=0;
	ll maxm=0; 
	for(ll i=1;i<=n-1;i++){
		maxm+=i*d;
	}
	if(m>=maxm){
		cout<<n;
		return 0;
	}
	if(m<d){
		cout<<1;
		return 0;
	}
	for(ll i=1;sumd<=m;i++){
		sumd+=i*d;
		ans++;
	}
	cout<<ans;


	return 0;
}
