#include <bits/stdc++.h>
using namespace std;
long long a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		long long mx=-1;
		for(int i=1;i<=n;i++)
		{
			mx=max(mx,a[i]);
		}
		cout<<mx;
		return 0;
	}
	else if(m==n)
	{
		long long s=0;
		for(int i=1;i<=n;i++)
		{
			s=(s&a[i]);
		}
		cout<<s;
		return 0;
	}
	else if(m==2)
	{
		long long mx=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				long long awa=(a[i]&a[j]);
				mx=max(mx,awa);
			}
		}
		cout<<mx;
	}
	else if(m==n-1)
	{
		long long mx=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(j!=i)
				{
					long long awa=(a[i]&a[j]);
					mx=max(mx,awa);
				}
			}
		}
			cout<<mx;
	}
	return 0;
}
