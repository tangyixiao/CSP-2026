#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define ll long long
ll n,ans;
string s;
int main(){
	ios::sync_with_stdio();
	cin.tie();
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll len=0;
	for(ll i=1;i<=n;i++){
		ll x;
		char y;
		cin>>x>>y;
		len+=x;
		for(int j=1;j<=x;j++){
			s+=y;
		}
	}
	//cout<<s<<endl;
	ll j=len-1;
	for(ll i=0;i<(len+1)/2;i++){
		if(s[i]!=s[j]){
			ans++;
			//s[i]=s[j];
		}
		//cout<<s[i]<<" "<<s[j]<<endl;
		j--;
	}
	cout<<ans<<endl;
	return 0;
}
