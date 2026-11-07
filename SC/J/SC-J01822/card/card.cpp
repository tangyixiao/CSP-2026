#include<bits/stdc++.h>
using namespace std;
long long num[999999],c[999999],b[999999];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long a,n;
	cin>>n>>a;
	for(long long df=1;df<=a;df++)
		{
			b[df]=0;
			c[df]=0;
		}
	for(long long i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	for(long long i=1;i<=n;i++)
	{
		long long x=i;
		for(long long j=i;j<=n;j++)
		{
			if(c[num[j]]==1)
			{
				x=j;
				for(long long df=1;df<=a;df++)
		        {
			        c[df]=0;
		        }
			}
			else
			{
				c[num[j]]=1;
			}
		}
		for(long long df=x;df<=n;df++)
		{
			b[num[df]]++;
		}
        for(long long df=1;df<=a;df++)
		        {
			        c[df]=0;
		        }
	}
	for(long long df=1;df<=a;df++)
		{
			cout<<b[df]<<" ";
		}
}