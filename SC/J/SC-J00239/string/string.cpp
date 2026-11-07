#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n,ans=0;cin>>n;
	string s1;
	for(ll i=1;i<=n;i++){
		ll a;cin>>a;
		char c;cin>>c;
		for(ll j=1;j<=a;j++){
			s1+=c;
		}
	}
	if(s1.size()%2==0){
		for(ll i=0;i<(s1.size()/2-1);i++){
			if(s1[i]!=s1[s1.size()-i-1]) ans++;
		}
	}else{
		for(ll i=0;i<(s1.size()/2);i++){
			if(s1[i]!=s1[s1.size()-i-1]) ans++;
		}
	}
	cout<<ans;
	return 0;
}