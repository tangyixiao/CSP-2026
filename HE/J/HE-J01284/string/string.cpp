#include<bits/stdc++.h>
#define ll long long
using namespace std;
char s[100000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	ll cnt=0;
	for(ll i=1;i<=n;i++){
		char c;
		ll a;
		cin>>a>>c;
		for(ll j=cnt+1;j<=cnt+a;j++){
			s[j]=c;
		}
		cnt+=a;
	}
	ll ans=0;
	for(ll i=1;i<=cnt/2;i++){
	//	if(i==cnt/2&&cnt%2==1) break;
		if(s[i]!=s[cnt-i+1]) ans++;
	}
	cout<<ans<<"\n";
	return 0;
}
