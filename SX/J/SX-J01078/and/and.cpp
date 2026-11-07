#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],v[N];
long long maxx=LLONG_MIN,n,m;
int check()
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=i-1) return 0;
	}
	return 1;
}
void dfs(int k,int i)
{
	if(i==m+1)
	{
		long long sum=0;
		sum=v[1];
		for(int j=2;j<=m;j++)
		{
			sum=sum&v[j];
		}
		maxx=max(maxx,sum);
		return;
	}
	if(k==n+1)
	{
		if(i!=m+1) return;
		long long sum=0;
		sum=v[1];
		for(int j=2;j<=m;j++)
		{
			sum=sum&v[j];
		}
		maxx=max(maxx,sum);
		return;
	}
	v[i]=a[k];
	dfs(k+1,i+1);
	v[i]=0;
	dfs(k+1,i);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n<=20)
	{
		dfs(1,1);
		cout<<maxx;
	}
	else if(n<=2000)
	{
		if(m==1)
		{
			for(int i=1;i<=n;i++)
			{
				maxx=max(maxx,1ll*a[i]);
			}
			cout<<maxx;
		}
		else if(m==2)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					if(i==j) continue;
					maxx=max(maxx,1ll*(a[i]&a[j]));
				}
			}
			cout<<maxx;
		}
		else if(m==n)
		{
			maxx=a[1];
			for(int i=2;i<=n;i++)
			{
				maxx=maxx&a[i];
			}
			cout<<maxx;
		}
	}
	else if(n<=200000)
	{
		sort(a+1,a+n+1,greater<int>());
		maxx=a[1];
		for(int i=2;i<=m;i++)
		{
			maxx=maxx&a[i];
		}
		cout<<maxx;
	}
	return 0;
}