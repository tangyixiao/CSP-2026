#include<bits/stdc++.h>
using namespace std;
char b[200010],d[200010];
long long a[200010],c[2100001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,s=0,s1=0,x=0,y=0,l=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		s=s+a[i];
	}
	x=1;
	y=1;
	for(int i=1;i<=n;i++)
	{
		if(b[x]==b[n+1-y])
		{
			if(a[x]<a[n+1-y])
			{
				a[n+1-y]=a[n+1-y]-a[x];
				x++;
			}
			else if(a[x]>a[n+1-y])
			{
				a[x]=a[x]-a[n+1-y];
				y++;
			}
			else
			{
				x++;
				y++;
			}
		}
		else
		{
			if(a[x]<a[n+1-y])
			{
				a[n+1-y]=a[n+1-y]-a[x];
				l=l+a[x];
				x++;
			}
			else if(a[x]>a[n+1-y])
			{
				a[x]=a[x]-a[n+1-y];
				l=l+a[n+1-y];
				y++;
			}
			else
			{
				l=l+a[n+1-y];
				x++;
				y++;
			}
		}
		if(x+y-1==n)
		{
			break;
		}
	}
	cout<<l;
	return 0;
}