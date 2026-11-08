#include<bits/stdc++.h>

using namespace std;
long long x[35];
int n,m,n_,cnt;
long long a[200005],b[200005],c[200005],ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	x[0]=1;
	for(int i=1;i<=30;i++)
	{
		x[i]=x[i-1]*2;
	}
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		b[i]=i;
	}
	n_=n;
	for(int i=30;i>=0;i--)
	{
		cnt=0;
		for(int j=1;j<=n_;j++)
		{
			if((a[b[j]]&x[i])!=0ll)
			{
				c[++cnt]=b[j];
			}
		}
		if(cnt<m)
		{
			continue;	
		}
		ans+=x[i];
		n_=cnt;
		for(int j=1;j<=n_;j++)
		{
			b[j]=c[j];
		}
	}
	printf("%lld",ans);
	return 0;
}
