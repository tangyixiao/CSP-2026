#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,cnt;
string s;
char c[300001],cc;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>m;
		cin>>cc;
		for(ll j=1;j<=m;j++){
			s+=cc;
		}
		
	}
	ll l=s.size();
	for(ll i=0;i<l/2+1;i++){
		if(s[i]!=s[l-i-1]){
			cnt++;
			s[l-1-i]=s[i];
		}
	}
	cout<<cnt;
	return 0;
} 
