#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
ll n,k[200009],ans;
string si[200009],s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>k[i]>>si[i];
		for(ll j=1;j<=k[i];j++) s+=si[i];
	}
	ll l=s.size();
	for(ll i=0;i<=l/2;i++)
		if(s[i]!=s[l-1-i])
			ans++;
	if(l%2==0) l--;
	cout<<ans<<endl;
	return 0;
}
