#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="",sf="";
	ll n,ans=0;
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll x;
		char y;
		cin>>x>>y;
		for(ll j=1;j<=x;j++){
			s=s+y;
		}
	}
	
	for(ll i=s.size()-1;i>=0;i--){
		sf=sf+s[i];
	}
	
	for(ll i=0;i<s.size();i++){
		if(s[i]!=sf[i]){
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
}
