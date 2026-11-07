#include <bits/stdc++.h>
using namespace std;
struct sd
{
	long long a;char b;
}a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].a;
		cin>>a[i].b;
	}
	long long l=1,r=n;
	sum=n;
	while(sum>0)
	{
		//cout<<sum<<' ';
		if(a[l].b!=a[r].b)
		{
			if(a[l].a<a[r].a)
			{
				sum--;
				a[r].a-=a[l].a;
				ans+=a[l].a;
				l++;
			}
			else if(a[l].a>a[r].a)
			{
				sum--;
				a[l].a-=a[r].a;
				ans+=a[r].a;
				r--;
			}
			else if(a[l].a==a[r].a)
			{
				sum-=2;
				ans+=a[r].a;
				r--;l++;
			}
		}
		else if(a[l].b==a[r].b)
		{
			if(a[l].a<a[r].a)
			{
				sum--;
				a[r].a-=a[l].a;
				l++;
			}
			else if(a[l].a>a[r].a)
			{
				sum--;
				a[l].a-=a[r].a;
				r--;
			}
			else if(a[l].a==a[r].a)
			{
				sum-=2;
				r--;l++;
			}
		}
	}
	cout<<ans;
	return 0;
}