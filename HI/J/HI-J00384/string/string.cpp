#include<bits/stdc++.h>;
using namespace std;
typedef long long ll; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	ll a;
	string b,m;
	string s;
	ll ans=0;
	ll cnt=0;
	for(ll i=0;i<n;i++){
		cin>>a>>b;
		cnt+=a;
		for(int j=0;j<a;j++){
			s=s+b;
			ans++;
		}
	}
	m=s;
	for(ll i=0;i<ans;i++){
		m[i]=s[ans-i-1];
	}
	if(m==s){
		cout<<0;
		return 0;
	}
	ll cnt1=1LL*(cnt/2);
	ll ans1=0;
	for(ll i=0;i<=cnt1;i++){
		if(s[i]!=s[cnt-i-1]){
			ans1++;
		}
	}

	cout<<ans1;
	 
	return 0;
} 
