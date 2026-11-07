#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200001];
	cin>>n>>m;
	int ans;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if (n==m)
	{
		ans=a[1];
		for (int i=2;i<=n;i++)
		{
			ans=ans&a[i];
		}
	}
	if (m==1)
	{
		ans=-1;
		for (int i=1;i<=n;i++)
		{
			ans=max(ans,a[i]);
		}
	}
	if(m==2)
	{
		int ann=-1;
		ans=a[1];
		for (int i=1;i<=n;i++)
		{
			for (int j=i+1;j<=n;j++)
			{
				ans=ans&a[j];
				ann=max(ann,ans);
			}
		}
		ans=ann;
	} 
	cout<<ans;
	return 0;
}
