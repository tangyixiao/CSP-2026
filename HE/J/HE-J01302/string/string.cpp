#include<bits/stdc++.h>
using namespace std;
long long a[2000005];
string c,ss;
int n;
long long ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin>>n;
	int l=1,r=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	while(l<r)
	{
		if(a[l]>a[r])
		{
			if(c[l]!=c[r])
			{
				ans+=a[r];
				a[l]-=a[r];
				if(a[l]==0)
				{
					l++;
				}
				r--;
			}
			else
			{
				a[l]-=a[r];
				if(a[l]==0)
				{
					l++;
				}
				r--;
			}
		}
		else if(a[r]>a[l])
		{
			if(c[l]!=c[r])
			{
				ans+=a[l];
				a[r]-=a[l];
				if(a[r]==0)
				{
					r--;
				}
				l++;
			}
			else
			{
				a[r]-=a[l];
				if(a[r]==0)
				{
					r--;
				}
				l++;
			}
		}
		else
		{
			if(c[l]!=c[r])
			{
				ans+=a[l];
				r--;
				l++;
			}
			else
			{
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}
