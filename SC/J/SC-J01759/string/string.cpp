#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	bool flag=true;
	long long a[n+5];
	char c[n+5];
	cin>>a[1]>>c[1];
	for(int i=2;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		if(c[i]!=c[i-1]) flag=false;
	}
	if(flag==true) 
	{
		cout<<0;
		return 0;
	}
	long long ans=0;
	int r=n,l=1;
	while(l<=r)
	{
		if(c[r]==c[l]&&a[r]==a[l]) 
		{
			l++;
			r--;
			continue;
		}
		if(c[r]==c[l])
		{
			if(a[r]>a[l])
			{
				a[r]-=a[l];
				l++;
			}else
			{
				a[l]-=a[r];
				r--;
			}
			continue;
		}
		if(a[r]==a[l])
		{
			ans+=a[r];
			r--;
			l++;
			continue;
		}
		if(a[r]>a[l])
		{
			ans+=a[l];
			a[r]-=a[l];
			l++;
			continue;
		}
		if(a[r]<a[l])
		{
			ans+=a[r];
			a[l]-=a[r];
			r--;
			continue;
		}
	}
	cout<<ans;
	return 0;
}