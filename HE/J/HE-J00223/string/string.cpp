#include<iostream>
using namespace std;
typedef long long ll;
ll n,cnt,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=0;i<n;++i){
		ll a;
		char c;
		cin>>a>>c;
		cnt+=a;
		for(ll j=0;j<a;++j)s+=c;
	}
	for(int i=0;i<=cnt/2;++i){
		if(s[i]!=s[cnt-i-1])++ans;
	}
	cout<<ans;
	return 0;
}
