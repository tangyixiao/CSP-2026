#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
const ll INF=1e18;

struct node{
	ll s;
	char c;
};

void solve(){
	ll n;
	cin>>n;
	vector<node> v(n);
	for (ll i=0;i<n;i++){
		node x;
		cin>>x.s>>x.c;
		v[i]=x;
	}
	ll i=0,j=n-1;
	node x=v[i],y=v[j];
	ll cnt=0;
	while (i<j){
		ll d=abs(x.s-y.s);
		ll mx=max(x.s,y.s);
		bool bigger=x.s>y.s;
		if (x.c==y.c){
			if (x.s==y.s){
				x=v[++i],y=v[--j];
			}else if (bigger){
				x.s-=y.s;
				y=v[--j];
			}else {
				y.s-=x.s;
				x=v[++i];
			}
		}else {
			if (x.s==y.s){
				cnt+=x.s;
				//cout<<mx-d<<"\n";
				x=v[++i],y=v[--j];
			}else if (bigger){
				x.s-=y.s;
				cnt+=mx-d;
				y=v[--j];
				//cout<<mx-d<<"\n";
			}else {
				y.s-=x.s;
				cnt+=mx-d;
				x=v[++i];
				//cout<<mx-d<<"\n";
			}
		}
	}cout<<cnt;
	return ;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	solve();
	return 0;
}
