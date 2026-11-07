#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
struct q{
	ll len;
	char c;
}a[200010];
string s=" ";
ll ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].len>>a[i].c;
		for(ll j=1;j<=a[i].len;j++) s+=a[i].c;
	}
	ll l=s.size()/2,m=s.size();
	for(ll i=1;i<=l;i++){
		if(s[i]!=s[m-i]) ans++;
	}
	cout<<ans;
	return 0;
}
//Trick||Treat!
//68pts?
