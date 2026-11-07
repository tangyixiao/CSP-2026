#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
ll a[200005],vis[200005],ans;
bool cmp(ll x,ll y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(ll i=2;i<=m;i++){
		ans&=a[i];
	}
	printf("%lld",ans);
	return 0;
}
