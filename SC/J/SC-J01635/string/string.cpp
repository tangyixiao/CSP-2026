//CSP-J2026 B by wyyinput
//Task name: string
//Date: 2026/10/31
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pii pair<int,int>
#define pli pair<ll,int>
#define pil pair<int,ll>
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
const int N=2e5+55;
int n;
ll len;
int a[N];
ll sum[N];
char c[N];
int l,r;
ll ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum[i]=sum[i-1]+a[i];
	}
	l=1;
	r=n;
	len=sum[n];
	while(l!=r){
		ll lj_l=sum[l-1]+1;
		ll rj_l=sum[l];
		ll lj_r=sum[r-1]+1;
		ll rj_r=sum[r];
		ll rev_lj_r=len-rj_r+1;
		ll rev_rj_r=len-lj_r+1;
		if(c[l]!=c[r]){
			ans+=max(0ll,min(rj_l,rev_rj_r)-max(lj_l,rev_lj_r)+1);
		}
		if(rj_l<rev_rj_r){
			++l;
		}else{
			--r;
		}
	}
	cout<<ans<<"\n";
	return 0;
}