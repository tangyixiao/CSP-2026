#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,ans;
string s=" ";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll a;
		char c;
		cin>>a>>c;
		for(ll i=1;i<=a;i++){
			s+=c;
		}
	}
	ll len=s.size()-1;
	for(ll i=1;i<=len/2;i++){
		if(s[i]!=s[len-i+1])ans++;
	}
	cout<<ans;
	return 0;
}
