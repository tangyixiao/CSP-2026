#include<bits/stdc++.h>
using namespace std;
int a[200005],n,m,ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	if(m==1)
	{
		sort(a,a+n);
		cout<<a[n-1];
		return 0;
	}
	if(m==n)
	{
		ans=a[0];
		for(int i=1;i<n;i++)ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	if(m==n-1)
	{
		for(int j=0;j<n;j++)
		{
			int result=a[(j+1)%n];
			for(int i=0;i<n;i++)
			{
				if(i!=j)result=result&a[i];
			}
			ans=max(ans,result);
		}
		cout<<ans;
		return 0;
	}
	if(m==2)
	{
		for(int j=0;j<n-1;j++)
			for(int i=j+1;i<n;i++)
				ans=max(a[j]&a[i],ans);
		cout<<ans;
		return 0;
	}
	return 0;
}