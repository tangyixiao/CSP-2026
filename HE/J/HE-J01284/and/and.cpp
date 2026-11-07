#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[2000010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	ll maxn=0;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	ll cnt=a[1];
	if(m==n){
		for(ll i=1;i<=n;i++){
		    cnt&=a[i];
        }
        cout<<cnt<<"\n";
        return 0;
	}
	if(m==1){
		cout<<maxn<<"\n";
		return 0;
	}
	maxn=0;
	if(m==2){
		for(ll i=1;i<=n;i++){
			for(ll j=1;j<=i;j++){
				if(i==j) continue;
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn<<"\n";
		return 0;
	}
	bool flag=false;
	for(ll i=1;i<=n;i++){
		if(a[i]!=i-1) flag=true;
	}
	if(flag){
		sort(a+1,a+1+n,greater<int>());
		cout<<a[m]<<"\n";
		return 0;
	}
	if(m==n-1){
		ll maxm=0;
		for(ll i=1;i<=n;i++){
			ll q=a[1];
			for(ll j=2;j<=n;j++){
				if(j==i) continue;
				q&=a[j];
			}
			maxm=max(maxm,q);
		}
		cout<<maxm<<"\n";
		return 0;
	}
	sort(a+1,a+1+n,greater<int>());
	ll qaz=a[1];
	for(ll i=2;i<=m;i++){
		qaz&=a[i];
	}
	cout<<qaz<<"\n";
	return 0;
}
