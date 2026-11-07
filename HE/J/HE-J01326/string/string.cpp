#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	int n;
	cin>>n;
	long long ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	while(l<=r)
	{
		if(b[l]==b[r])
		{
			if(a[l]==a[r])
			{
				l++;
				r--;
			}
			else if(a[l]>a[r])
			{
				a[l]-=a[r];
				r--;
			}
			else
			{
				a[r]-=a[l];
				l++;
		}			 
			continue;
		}
		if(a[l]==a[r])
		{
			ans+=a[l];
			l++;
			r--;
		}
		else if(a[l]>a[r])
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
	cout<<ans;
	return 0;
} 
