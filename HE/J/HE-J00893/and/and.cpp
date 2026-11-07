#include <bits/stdc++.h>
using namespace std;
int a[100000000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]>a[i-1])
			{
				ans=a[i];
				
			}
		}
	}
	if(m==n)
	{
		ans=a[1]&&a[2];
		for(int i=3;i<=n;i++)
		{
			ans=ans&&a[i];
		}
	}
	cout<<ans;
	return 0;
}
