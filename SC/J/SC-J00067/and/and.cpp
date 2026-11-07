#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=2e5+10;
int n,m;
ll a[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i) scanf("%lld",&a[i]);
	sort(a+1,a+1+n,greater());
	ll ans=a[1];
	for(int i=2;i<=m;++i) ans&=a[i];
	printf("%lld",ans);
	return 0;
}