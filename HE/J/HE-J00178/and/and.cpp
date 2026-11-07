#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[2000005],ans,k;
bool cmp(int a,int b)
{
	return a>b;
}
bool asd(long long h)
{
	for(int i=0;i<=31;i++)
	{
		long long xx=(1<<i);
		if(xx==h)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(asd(a[i])==1)
		{
			a[i]=0;
		}
	}
	if(m==1)
	{
		long long maxx=-1;
		for(int i=1;i<=n;i++)
		{
			maxx=max(maxx,a[i]);
		}
		cout<<maxx;
		return 0;
	}
	if(m==2&&n<=10000)
	{
		long long maxx=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				long long ss=a[i]&a[j];
				maxx=max(maxx,ss);
			}
		}
		cout<<maxx;
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++)
	{
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}
