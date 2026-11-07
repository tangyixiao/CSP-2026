#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
string s;
ll ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	ll len=0;
	for(ll i=1;i<=n;i++){
		ll ai;
		char si;
		cin >> ai >> si;
		for(ll j=1;j<=ai;j++){
			s[len+j]=si;
		}
		len+=ai;
	}
	ll len1=len;
	len/=2;
	for(ll i=len;i>=1;i--){
		if(s[i]!=s[len1-i])ans++;
	}
	cout << ans << endl;
	return 0;
}
