#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=10009;
bool ishuwen(string s){
	ll n=s.size();
	ll l=0,r=n-1;
	while(l<=r){
		if(s[r]!=s[l]){
			return 0;
		}
		l++;
		r--;
	}
	return 1;
}
ll n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=0;i<n;i++){
		ll a;
		string s1;
		cin>>a>>s1;
		for(ll j=0;j<a;j++){
			s+=s1;
		}
	}
	if(ishuwen(s)==1){
		cout<<0<<endl;
		return 0;
	}
	ll x=s.size();
	ll l=0,r=x-1;
	ll ans=0;
	while(l<=r){
		if(s[r]!=s[l]){
			ans++;
		}
		l++;
		r--;
	}
	cout<<ans<<endl;
	return 0;
}

