#include <bits/stdc++.h>
using namespace std;
int n,m,a[20000005],ans,ans1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	ans=0;
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	if(m==n-1)
	{
		ans=-1;
		for(int i=1;i<=n;i++)
		{
			if(i==1)
				ans1=a[2];
			else
				ans1=a[1]; 
			for(int j=1;j<=n,j!=a[i];j++)
			{
				
				if(ans1==0)
					continue;
				else
				{
					ans1=ans1&a[j];
				}
			}
			ans=max(ans,ans1);
		}
		cout<<ans;
		return 0;
	}
	if(m==2)
	{
		ans=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans1=-1;
				if(ans1==0)
					continue;
				ans1=max(ans1,a[i]&a[j]);
			}
			ans=max(ans,ans1);
		}
	}
	if(n==m)
	{
		ans=a[1];
		for(int i=1;i<=n;i++)
		{
			if(ans==0)
			{
				cout<<ans;
				return 0;
			}
			ans=ans&a[i];
		}
	}
	cout<<ans;
	return 0;
}