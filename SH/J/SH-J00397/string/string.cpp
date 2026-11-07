#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,len[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>len[i]>>c[i];
	}
	ll p1=1,p2=1,l=1,r=n;
	ll ans=0;
	while(l<r){
		ll a=len[l]-p1+1,b=len[r]-p2+1;
		if(a<b){
			if(c[l]!=c[r]) ans+=a;
			l++;
			p1=1;
			p2+=a;
		}else if(a>b){
			if(c[l]!=c[r]) ans+=b;
			r--;
			p2=1;
			p1+=b;
		}else{
			if(c[l]!=c[r]) ans+=a;
			l++,r--;
			p1=p2=1;
		}
	}
	cout<<ans<<"\n";
	return 0;
} 
