#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char s[200005][2];
ll a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,i,l=1;
	ll ans=0,sum=0;
	scanf("%d",&n);
	int r=n;
	for(i=1;i<=n;++i)
	{
		scanf("%lld %c",&a[i],&s[i][0]);
		sum+=a[i];
	}
	while(l<=r)
	{
	//	printf("%d %d %lld %lld\n",l,r,sum,ans);
//		for(i=1;i<=n;++i)
//			printf("%lld ",a[i]);
//		printf("\n");
		if(a[l]>a[r])
			sum-=2*a[r],a[l]-=a[r],--r;
		else if(a[r]>a[l])
			sum-=2*a[l],a[r]-=a[l],++l;
		else if(a[l]==a[r])
			sum-=2*a[l],++l,--r;
		if(s[l][0]!=s[r][0])
			ans+=min(a[l],a[r]);	
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
