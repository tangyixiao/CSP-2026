#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Node{
	ll a;
	char b;
};
ll n,ans;
Node x[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>x[i].a>>x[i].b;
	}
	ll j=n,i=1,xi=x[i].a,xj=x[j].a;
	while(i<=j){
		if(x[i].b!=x[j].b)ans+=min(xi,xj);
		if(xi<xj)xj-=xi,i++,xi=x[i].a;
		else if(xj<xi)xi-=xj,j--,xj=x[j].a;
		else if(xi==xj)i++,j--,xi=x[i].a,xj=x[j].a;
	}
	cout<<ans;
	return 0;
}
