#include<bits/stdc++.h>
using namespace std;
long long ans;
long long n,m;
struct anweiyu{
	long long a;
	long long b;
}c[200010];
bool cmp(anweiyu aa,anweiyu bb)
{
	if(aa.b==bb.b)
	{
		return aa.a>bb.a;
	}
	else
	return aa.b>bb.b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&c[i].a);
		long long t=c[i].a;
		while(t)
		{
			c[i].b++;
			t&=(t-1);
		}
	}
	sort(c+1,c+1+n,cmp);
	ans=c[1].a;
	for(int i=2;i<=m;i++)
	{
		ans&=c[i].a;
	}
	printf("%lld",ans);
	return 0;
}
