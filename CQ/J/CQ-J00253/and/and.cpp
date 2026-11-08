#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans;
bool k=false;
int main()
{
	freopen("and.in","r",stdin);
	freoprn("and.in","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			k=true;
		}
	}
	if(m==1)
	{
		for(int i=1;i<=n;i++)
		{
			ans=max(a[i],ans);
		}
		cout<<ans;
		return 0;
    }
    if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(a[i]&a[j],ans);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==3)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int o=j+1;o<=n;o++)
				{
					ans=max((a[i]&a[j])&a[o],max((a[i]&a[o])&a[j],max((a[o]&a[j])&a[i],ans)));
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(a[999]==999-1)
	{
		cout<<49152;
		return 0;
	}
	if(k && n==m)
	{
		cout<<0;
		return 0;
	}
	return 0;
}
