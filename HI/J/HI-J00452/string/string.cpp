#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s=" ";
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a>>c;
		for(ll j=1;j<=a;j++){
			s+=c;
		}
	}
	ll ans=0;
	for(ll i=1;i<=(s.length()-1)/2;i++){
		if(s[i]!=s[s.length()-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
