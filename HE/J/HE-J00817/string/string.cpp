#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,ans;
char x;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	s=" "+s;
	for(ll i=1;i<=n;i++){
		cin>>m>>x;
		for(ll j=1;j<=m;j++)s+=x;
	}
	ll ls=s.size();
	int l=1,r=ls-1;
	while(l<=r){
		if(s[l]!=s[r])ans++;
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}
