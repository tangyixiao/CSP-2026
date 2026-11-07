#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,cnt;
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll x; char c;
		cin>>x>>c;
		for(ll j=1;j<=x;j++) s+=c;
	}
	ll l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]) cnt++;
		l++; r--;
	}
	cout<<cnt<<endl;
	return 0;
}
