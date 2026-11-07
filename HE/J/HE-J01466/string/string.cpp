#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	char c,s[1000010];
	ll i1=0;
	for(ll x,i=1;i<=n;i++){
		cin>>x;
		cin>>c;
		while(x--)s[i1++]=c;
	}
	ll l=0,r=i1-1,ans=0;
	while(l<=r){
		if(s[l]!=s[r]){
			ans++;
			s[r]=s[l];
		}l++;
		r--;
	}cout<<ans;
	
	return 0;
}
