#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define st string
const ll N=1e6+5;
ll a[N];
ll check(ll x,ll k,ll p){
	ll temp=a[k];
	while(x--){
		temp&=a[p+1];
		p++;
	}
	return temp;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	ll n,m,temp=0,mmax=INT_MIN;
	cin>>n>>m;
	for(ll i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
  			temp=check(m,i,j);
			mmax=max(mmax,temp);
		}
	}
	cout<<mmax;
	return 0;
}