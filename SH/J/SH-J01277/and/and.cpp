#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,i;
	ll ans;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;++i)
		scanf("%lld",&a[i]);
	sort(a+1,a+n+1);
	ans=a[n];
	for(i=n;i>=n-m+1;--i)
		ans&=a[i];
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
