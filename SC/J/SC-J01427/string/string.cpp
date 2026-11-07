#include<bits/stdc++.h>
using namespace std;
long long a[200001];
char b[200001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n=0,k1=0,k2=0,ans=0,x=0,t=1;
	char y;
	bool c=0;
	scanf("%lld",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%lld %c",&a[i],&b[i]);
		k1=k1+a[i];
	}
	if(k1%2==1)
	{
		k1=k1/2+1;
		c=1;
	}
	else
	{
		k1=k1/2;
	}
	for(int i=1;i<=n;i++)
	{
		k1=k1-a[i];
		if(k1<=0)
		{
			k2=i;
			if(c)
			{
				x=a[i]+k1-1;
			}
			else
			{
				x=a[i]+k1;
			}
			y=b[i];
			a[i]=-k1;
			break;
		}
	}
	for(int i=k2;i<=n;)
	{
		if(b[i]!=y)
		{
			if(a[i]==x)
			{
			    ans=ans+x;
				a[i]=a[i]-x;
				x=a[k2-t];
				y=b[k2-t];
				++i;
				++t;
			}
			if(a[i]>x)
			{
				ans=ans+x;
				a[i]=a[i]-x;
				x=a[k2-t];
				y=b[k2-t];
				++t;
			}
			else
			{
				ans=ans+a[i];
				x=x-a[i];
				++i;
			}
		}
		else if(a[i]==x)
		{
			a[i]=a[i]-x;
			x=a[k2-t];
			y=b[k2-t];
			++i;
			++t;
		}
		else if(a[i]>x)
		{
			a[i]=a[i]-x;
			x=a[k2-t];
			y=b[k2-t];
			++t;
		}
		else
		{
			x=x-a[i];
			++i;
		}	
	}
	printf("%lld",ans);
	return 0;
}