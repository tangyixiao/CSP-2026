#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 200005;
ll n,m,k,t,ans;
ll a[N],pre[N],bg[N],ed[N];
char c[N];
ll erfen(ll x){
	ll l = 1,r = n,mid,s = 0;
	while(l<r){
		mid = (l+r)/2;
		if(pre[mid]>=x){
			r=mid;
		}
		else{
			l = mid+1;
		}
	}
	return l;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i= 1;i<=n;i++){
		cin>>a[i]>>c[i];
		pre[i]=pre[i-1]+a[i];
		bg[i] = pre[i-1]+1;
		ed[i] = pre[i];
	} 
	m = pre[n];
	for(int i = 1;i<=n;i++){
		ll l = m-(ed[i])+1;
		ll r = m-(bg[i])+1;
		if(r<=(m+1)/2) break;
		r = max(r,(m+1)/2);
		l = max(l,(m+1)/2);
		ll rx = erfen(r);
		ll lx = erfen(l);
		if(lx == rx){
			if(c[lx] != c[i]){
				ans+=r-l+1;
			}
			continue;
		}
		if(c[lx] != c[i])
			ans+=ed[lx]-l+1;
		if(c[rx] != c[i])
			ans+=r-bg[rx]+1;
		for(int j= lx+1;j<=rx-1;j++){
			if(c[j]!=c[i]){
				ans+=ed[j]-bg[j]+1;
			}
		}
	}
	cout<<ans;
} 