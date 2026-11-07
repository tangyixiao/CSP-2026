//55min
#include<bits/stdc++.h>
using namespace std;
struct st
{
	int s[51];
	int zhi;
}a[200005];
bool cmp(st x,st y)
{
	return x.zhi>y.zhi;
}
int p[51];
int ans[51];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	p[0]=1;
	for(int i=1;i<=50;i++)
	{
		p[i]=2*p[i-1];
	}
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int b;
		cin>>b;
		a[i].zhi=b;
		int j=0;
		while(b!=0)
		{
			a[i].s[j]=b%2;
			b/=2;
			j++;
		}
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=m;i++)
	{
		for(int j=31;j>=0;j--)
		{
			if(a[i].s[j]==1)
				ans[j]=1;
			else
				ans[j]=0;
		}
	}
	int sum=0;
	for(int i=31;i>=0;i--)
	{
		sum+=ans[i]*p[i];
	}
	cout<<sum;
}