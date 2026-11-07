#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
ll n,a[N],ans=0;
char c[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);  cout.tie(0);
cin>>n;
for(ll i=1;i<=n;i++){
cin>>a[i]>>c[i];	
s.insert(s.size(),a[i],c[i]);
}	
for(ll i=0;i<(s.size()/2);i++){
	if(s[i]!=s[s.size()-i-1]){
		ans++;
	}
}
cout<<ans;
	return 0;
}
