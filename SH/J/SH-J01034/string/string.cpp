#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
char c[200005];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int ans=0;
	int l=1,r=n;
	
	while(l<r)
	{
		
		if(c[l]!=c[r])
		{
			ans+=min(a[l],a[r]);
		
			if(a[l]>a[r])
			{
				a[l]-=a[r];
				r--;
				continue;
			}
			else if(a[l]==a[r])
			{
				l++;
				r--;
				
			}
			else
			{
				a[r]-=a[l];
				l++;
			}
		}
		else
		{
			if(a[l]>a[r])
			{
				a[l]-=a[r];
				r--;
			}
			else if(a[l]==a[r])
			{
				l++;
				r--;
			}
			else
			{
				a[r]-=a[l];
				l++;
			}
		}
	}

	cout<<ans;
	return 0;
}
