#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[214514],ans;
bool cmp(ll x,ll y){
	return (x > y);
}
bool check(ll a,ll b){
	ll t = 0;
	while(a){
		if(a % 2) if(t == b) return 1;
		a/=2;
		t++;
	}
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i = 1;i <= n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	ll l = 1,r = n,mx = 2147483648;
	for(ll k = 0;k <= 31;k++){
		ll cnt = 0,last = 0,flag = 0,start = 0;
		for(ll i = l;i <= r;i++){
			if(mx > a[l]) break;
			if(check(a[i],31-k)){
				cnt++,last = i;
				if(!flag) start = i;
				flag = 1;
			}
		}
		if(cnt >= m){
			r = last;
			l = start;
			ans+=mx;
		}
		mx>>=1;
	}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
