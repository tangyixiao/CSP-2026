#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int a[200010];
char c[200010];
int n;
ll ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r-1)
	{
		if(c[l]!=c[r])
		{
			if(a[l]>=a[r])
			{
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}
			else
			{
				ans+=a[l];
				a[r]-=a[l];
				l++;
			}
		}
		else
		{
			if(a[l]>=a[r])
			{
				a[l]-=a[r];
				r--;
			}
			else
			{
				a[r]-=a[l];
				l++;
			}
		}
	}
	if(c[l]!=c[r])
	{
		ans+=min(a[l],a[r]);
	}
	cout<<ans;
	
	return 0;
}