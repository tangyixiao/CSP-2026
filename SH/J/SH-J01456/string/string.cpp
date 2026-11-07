#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m=0,ans=0,a;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		ll a1;
		char x;
		cin>>a1>>x;
		for(ll i=1;i<=a1;i++){
			s[++m]=x;
		}
	}
	for(ll i=1;i<=m/2;i++){
		if(s[i]!=s[m-i+1]){
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
} 
