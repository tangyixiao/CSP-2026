#include<bits/stdc++.h>
using namespace std;
struct Num{
	long long val,heibit;
}num[200005];
bool cmp(Num x,Num y)
{
	if (x.heibit!=y.heibit)
		return x.heibit>y.heibit;
	else
		return x.val>y.val;
}
long long height_bit(int x)
{
	int i=0;
	while (x!=0)
	{
		if (x&1)
			i++;
		x=x>>1;
	}
	return i;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	long long ans;
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++)
	{
		scanf("%lld",&num[i].val);
		num[i].heibit=height_bit(num[i].val);
	}
	sort(num+1,num+n+1,cmp);
	ans=num[1].val;
	for (int i=2;i<=m;i++)
	{
		ans&=num[i].val;
	}
	printf("%lld",ans);
	return 0;
}