#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int pos[N],a[N],ans[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=n;i>=1;i--)
	{
		if(!pos[a[i]]) pos[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		int c=i;
		while(c<=n)
		{
			ans[a[c]]++;
			long long t=c;
			c=pos[a[t]]+1;
		}
	}
	for(int i=1;i<=m;i++) printf("%d",ans[i]);
	return 0;
}