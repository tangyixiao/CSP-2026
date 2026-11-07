#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct s{
	ll num;
	char type;
}a[200000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++)cin>>a[i].num>>a[i].type;
	string s="";
	for(ll i=0;i<n;i++){
		for(ll j=0;j<a[i].num;j++){
			s+=a[i].type;
		}
	}
	bool b=1;
	for(ll i=0;i<(s.size()+1)/2;i++){
		if(s[i]==s[n-i]){
			b=0;
		}
	}
	if(b==0){
		cout<<"0";
		return 0;
	}
	ll ans=0;
	for(ll i=0;i<(s.size()+1)/2;i++){
		if(s[i]!=s[n-i]){
			ans++;
		}
	}
	cout<<ans-1;
	return 0;
}
