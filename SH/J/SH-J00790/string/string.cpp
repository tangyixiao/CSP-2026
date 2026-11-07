#include<bits/stdc++.h>
#define int long long
using namespace std;
const int M=2e5+5;
int n,ans,a[M];
char c[M];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)scanf("%lld%c",&a[i],&c[i]);
	int i=0,j=n+1,li=0,lj=0;
	char pre=c[n];
	while(i<n||j>1)
	{
		if(li<=lj)
		{
			i++;
			if(c[i]!=pre)ans+=min(li+a[i],lj)-li;
			li+=a[i];
			if(li>lj)pre=c[i];
		}
		else
		{
			j--;
			if(c[j]!=pre)ans+=min(lj+a[j],li)-lj;
			lj+=a[j];
			if(lj>li)pre=c[j];
		}
	}
	printf("%lld",ans/2);
	return 0;
}
