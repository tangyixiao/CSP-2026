#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll n,ans;
struct ff{
	ll k;
	char s;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i].k>>a[i].s;
	}
	ll l=1,r=n;
	while(l<r){
		if(a[l].k==0) l++;
		if(a[r].k==0) r--;
		if(l>=r) break;
		ll c=min(a[l].k,a[r].k);
		if(a[l].s==a[r].s){
			a[l].k-=c;
			a[r].k-=c;
		}else{
			ans+=min(a[l].k,a[r].k);
			//cout<<l<<' '<<r<<endl;
			a[l].k-=c;
			a[r].k-=c;
		}
	}
	cout<<ans;
	return 0;
}