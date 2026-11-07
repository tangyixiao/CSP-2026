#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,a[200001],m,ans;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==2)
	{
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				int h=a[i]&a[j];
				ans=max(ans,h);
			}
		}
	}
	else
	{
		ans=a[n];
	    sort(a+1,a+n+1);
	    for(int i=n-1;i>n-m;i--)
		{
			ans=ans&a[i];
		}
	}
	cout<<ans;
	return 0;
}
