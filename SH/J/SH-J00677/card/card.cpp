#include<bits/stdc++.h>
using namespace std;
long long a[500010];
vector<long long> p;
long long res[300010];
long long n,m;
long long er(long long x)
{
	long long l=1,r=p.size()-1;
	while(l<=r)
	{
		long long mid=l+r>>1;
		if(p[mid]==x)
		{
			return mid;
		}
		else if(p[mid]>x)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return -1;
}
int main()
{
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(long long i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(long long i=1;i<=n;i++)
	{
		p.push_back(0);
		p.push_back(a[i]);
		for(long long j=i+1;j<=n;j++)
		{
			long long tt=er(a[j]);
			if(tt!=-1)
			{
				for(long long k=p.size()-1;k>=tt+1;k--)
				{
					p.pop_back();
				}
			}
			else
			{
				p.push_back(a[j]);
			}
		}
		for(long long j:p)
		{
			res[j]++;
		}
		p.clear();
	}
	for(long long i=1;i<=m;i++)
	{
		printf("%d ",res[i]);
	}
	
	return 0;
 } 
