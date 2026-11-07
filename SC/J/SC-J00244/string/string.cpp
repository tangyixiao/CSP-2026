#include<bits/stdc++.h>
using namespace std;

using ll=long long;
ll n;
ll a,lenz;
char ch;
string s;

ll solve(){
	ll ans=0;
	ll l=0,r=lenz-1;
	while(l<r){
		if(s[l]!=s[r]) ans++;
		l++;r--;
	}
	return ans;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a>>ch;
		lenz+=a;
		for(ll j=1;j<=a;j++) s+=ch;
	}
	cout<<solve()<<"\n";
	return 0;
}