#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+10;
ll a[N],s[N],n;
char c[N];
ll at(ll x){
	return lower_bound(s+1,s+n+1,x)-s;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(ll i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		s[i]=s[i-1]+a[i];
	}
	ll l=1,r=s[n],ans=0;
	while(true){
		//新的l,r还没有判断 
		ll segl=at(l);
		ll segr=at(r);
		if(segl>=segr){
			break;
		}
		ll l_nxt=s[segl]; //在保持同一段的前提下，可以到达的最远距离 
		ll r_nxt=s[segr-1]+1;
		if(l_nxt-l<=r-r_nxt){
			if(c[segl]!=c[segr]){
				ans+=l_nxt-l+1;
			}
			r-=l_nxt-l;
			l=l_nxt;
		}else{
			if(c[segl]!=c[segr]){
				ans+=r-r_nxt+1;
			}
			l+=r-r_nxt;
			r=r_nxt;
		}
		l++;
		r--;
	}
	cout << ans << "\n";
	return 0;
}
