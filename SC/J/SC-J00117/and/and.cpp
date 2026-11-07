#include<bits/stdc++.h>
using namespace std;
long long a[1000000],n,m,ans,ans2;
int main()
{	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		cout<<*max_element(a,a+n);
		return 0;
	}
	else if(m==2)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{	long long z=(a[i]&a[j]);
				ans=max(ans,z);
			}
		}
		cout<<ans;
	}
	else if(m==3)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{	
				for(int k=j+1;k<n;k++)
				{
					long long zz=(a[i]&a[j]&a[k]);
					ans2=max(ans2,zz);
				}
			}
		}
		cout<<ans2;
	}	
	else
	{
		cout<<ans;
	}
	return 0;
}