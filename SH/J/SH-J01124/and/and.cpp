#include<bits/stdc++.h>
using namespace std;
unsigned long long n,m,a[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	long long ans=0;
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			long long b=a[i];
			ans=max(ans,b);
		}
		cout<<ans<<endl;
		return 0;
	}
	if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans=ans&a[i];
		}
		cout<<ans<<endl;
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				long long b=a[i]&a[j];
				ans=max(ans,b);
			}
		}
		cout<<ans<<endl;
		return 0;
	}
}

