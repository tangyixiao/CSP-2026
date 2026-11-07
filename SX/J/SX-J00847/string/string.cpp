#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,x,ans,k=0,m;
ll a[200005];
char c[200005];
char cc;
string s,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio();
	cin.tie(0);
	cin>>n;
	m=n;
	while(m--){
		cin>>x>>cc;
  		while(x--) s+=cc;
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}