#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll ans=0;
ll n,l;
string s;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll a;
		string c;
		cin>>a>>c;
		for(ll j=1;j<=a;j++){
			s+=c;
		}
	}
	l=s.size();
	for(ll i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1])ans++;
	}
	cout<<ans;
	return 0;
}
