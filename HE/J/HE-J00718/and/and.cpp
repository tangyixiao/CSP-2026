#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[200010], ans=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1||m==2)
	{
		for(int i=1;i<=n;i++)
		{
			ans=max(ans,a[i]);
		}
		if(m==2)
		{
			long long ans2;
			for(int i=1;i<=n;i++)
			{
				if(a[i]!=ans)
				ans2=max(ans2,a[i]);
			}
			ans=ans&ans2;
		}
	 } 
	 if(m==n)
	 {
	 	ans=a[1];
	 	for(int i=2;i<=n;i++)
	 	{
	 		ans=ans&a[i];
		 }
	 }
	 cout<<ans;
	 return 0;
}
