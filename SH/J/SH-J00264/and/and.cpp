#include<bits/stdc++.h>
using namespace std;

int m,n,ans=0,a[2005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++) cin >> a[i];
	if(m==n)
	{
		ans=a[0];
		for(int i=1;i<n;i++)
		{
			ans&=a[i];
		}
	}
	else if(m==1)
	{
		for(int i=0;i<n;i++)
		{
			ans=max(ans,a[i]);
		}
	}
	else if(m==2)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				ans=max(ans,(a[i]&a[j]));
			}
		}
	}
	cout << ans;
	
	return 0;
}
