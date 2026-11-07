#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
string s;
int main(){
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll x;
		char a;
		cin>>x>>a;
		for(ll j=1;j<=x;j++){
			s+=a;
		}
	}
	ll l=0,r=s.size()-1;
	ll cnt=0;
	while(l<r){
		if(s[l]!=s[r]){
			cnt++;
		}
		l++;
		r--;
	}
	cout<<cnt;
	
	return 0;
}
