#include <bits/stdc++.h>
using namespace std;
int a[200005];
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
	sort(a+1,a+1+n);
	if(m==1) cout<<a[n];
	else if(m==n)
	{
		int ans=a[1];
		for(int i=1;i<=n;i++)ans=ans&a[i];
		cout<<ans;
	}
	else if(m==2)
	{
		int max_=-1;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				max_=max(max_,a[i]&a[j]);
			}
		}
		cout<<max_;
	}
	else if(m=n-1)
	{
		int max_=-1;
		for(int i=1;i<=n;i++)
		{
			int sum;
			if(i!=n)sum=a[i+1];
			else sum=a[1];
			for(int j=1;j<=n;j++)
			{
				if(j!=i)sum=sum&a[j];
			}
			max_=max(max_,sum);
		}
		cout<<max_;
	}
}
