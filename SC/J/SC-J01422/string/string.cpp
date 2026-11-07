#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct s{
	ll aa;
	char cc;
} a[200006];
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;cin>>n;
	for(ll i=1;i<=n;i++){
		ll x;
		char s;
		cin>>x>>s;
		a[i]={x,s};
	}
	ll i=1,j=n;
	ll ZINz=0;
	for(;i<j && i!=j;){
		if(a[i].cc!=a[j].cc){
			int ii=a[i].aa,jj=a[j].aa;
			if(ii>=jj){
				a[j].aa=0;
				a[i].aa-=jj;
				ZINz+=jj;
			}
			else{
				a[i].aa=0;
				a[j].aa-=ii;
				ZINz+=ii;
			}
		}
		else{
			int ii=a[i].aa,jj=a[j].aa;
			if(ii>=jj){
				a[j].aa=0;
				a[i].aa-=jj;
			}
			else{
				a[i].aa=0;
				a[j].aa-=ii;
			}
		}
		if(a[i].aa<=0) i++;
		if(a[j].aa<=0) j--;
	}
	cout<<ZINz<<"\n";
	return 0;
}