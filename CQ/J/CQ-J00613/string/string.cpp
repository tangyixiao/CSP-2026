#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=2e5+5;
ll n,ans=0;
struct asd{
	ll a;
	char c;
}a[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i].a>>a[i].c;
	}
	ll i=1,j=n,idi=1,idj=1;
	while(i<j){
		ll l=a[i].a-idi+1;
		ll r=a[j].a-idj+1;
		if(l<r){
			if(a[i].c!=a[j].c)ans+=l;
			idi=1;
			idj=idj+l;
			i++;
		}
		if(l==r){
			if(a[i].c!=a[j].c)ans+=l;
			idi=idj=1;
			i++;
			j--;
		}
		if(l>r){
			if(a[i].c!=a[j].c){
				ans+=r;
			}
			idj=1;
			idi=idi+r;
			j--;
		}
	}
	cout<<ans<<'\n';
	
	return 0;
}
