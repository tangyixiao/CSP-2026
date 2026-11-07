#include <bits/stdc++.h>
using namespace std;
long long maxn=0,n,m,t,two[200005][31],ten[200005],sum=0;
struct col
{
	int x,c;
}a[200005];
int cmp(col x,col y)
{
	return x.c>y.c;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	for (int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i].x);
		t=a[i].x;
		while (t!=0)
		{
			t/=2;
			a[i].c++;
			if (t==1)
			{
				break;
			}
		}
	}
	sort(a+1,a+n+1,cmp);
	long long k=0;
	for (int i=1;i<=m;i++)
	{
		t=a[i].x;k=0;
		while (t!=0)
		{
			two[i][++k]=t%2;
			t/=2;
		}
		maxn=max(maxn,k);
	}
	bool flag=1;
	k=0;
	for (int i=maxn;i>=1;i--)
	{
		flag=1;
		for (int j=1;j<=m;j++)
		{
			if (!two[j][i])
			{
				flag=0;
				break;
			}
		}
		ten[i]=int(flag);
	}
	int cnt=0;
	for (int i=1;i<=maxn;i++)
	{
		sum+=ten[i]*pow(2,cnt++);
	}
	printf("%lld",sum);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
