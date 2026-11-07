#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+10;
ll n,a[N];
char c[N];
string s;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
	cin>>n;
	ll L=0;
	for (ll i=1;i<=n;i++) {
		cin>>a[i]>>c[i];
		L+=a[i];
		for (ll j=1;j<=a[i];j++) s+=c[i];
	}
	ll ans=0;
	for (ll i=1;i<=L/2;i++) {
		if (s[i-1]!=s[L-i]) ans++;
	}
	cout<<ans;
	return 0;
} 
