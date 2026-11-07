#include<bits/stdc++.h> 
using namespace std;
int n,m,ans;
int a[100000005];
int main()
{
	freopen("road.in","and",stdin);
	freopen("road.out","and",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
		 if(n==m)
	{
		ans=a[1];
		for(int i=2;i<=n;i++)
		ans=ans&a[i];
		cout<<ans;
	}
	 else if(m==1)
	{
		sort(a+1,a+n+1);
		{
			cout<<a[n];
		}
	}
	else if(m==2)
	{
		ans=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(ans<(a[i]&a[j]))
				{
					ans=a[i]&a[j];
				} 
			}
		}
	}
	else if(m==3)
	{
		ans=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					if(ans<(a[i]&a[j]&a[j]))
					{
						ans=a[i]&a[j]&a[j];
					} 
				}
				
			}
		}
	}
	else if(m==4)
	{
		ans=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int kk=k+1;kk<=n;kk++)
					if(ans<(a[i]&a[j]&a[j]&a[kk]))
					{
						ans=a[i]&a[j]&a[j]&a[kk];
					} 
				}
				
			}
		}
	}
	cout<<ans;
	return 0;
 } 