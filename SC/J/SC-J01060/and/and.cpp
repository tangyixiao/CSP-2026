#include<bits/stdc++.h>
using namespace std;
long long a[200001];
bool mp(long long a,long long b)
{
	if(a>b)
	{
		return 1;
	}
	return 0;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(m==1)
	{
		long long d1=0;
		for(int i=1;i<=n;i++)
		{
			long long x;
			cin>>x;
			d1=max(d1,x);
		}
		cout<<d1;
	}
	else if(m==2)
	{
		long long d1=0,d2=0;
		for(int i=1;i<=n;i++)
		{
			long long x;
			cin>>x;
			if(x>d1)
			{
				d1=x;
			}
			else if(x>d2)
			{
				d2=x;
			}
		}
		if((d1&d2)==0)
		{
			cout<<min(d1,d2);
		}
		else
		{
			cout<<(d1&d2);
		}
	}
	else
	{
		long long x[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>x[i];
		}
		sort(x+1,x+1+n,mp);
		long long ans=x[1];
		for(int i=2;i<=m;i++)
		{
			ans=(ans&x[i]);
		}
		if(ans==0)
		{
			cout<<x[2];
		}
		else
		{
			cout<<ans;
		}
	}
	return 0;
}