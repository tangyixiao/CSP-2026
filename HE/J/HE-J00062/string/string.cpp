#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,l=0,cnt=0;
string s;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll a;
		char c;
		cin>>a;
		cin>>c;
		for(ll j=1;j<=a;j++) s=s+c;
		l=l+a;
	}
	ll ans=0;
	for(ll i=0;i*2<l;i++){
		if(s[i]!=s[l-1-i]) ans++;
	}
	cout<<ans;
	return 0;
}
