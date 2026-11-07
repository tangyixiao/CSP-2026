#include<bits/stdc++.h>
using namespace std;
long long a[1000005],b[1000005];
char c[1000005],d[1000005];
int main()
{
	freopen("string.in","r",stdin);	
	freopen("string.out","w",stdout);
	int n,i=0,i1=0,i2=0;
	long long ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld %c",&a[i],&c[i]);
		b[n-1-i]=a[i];
		d[n-1-i]=c[i];
	}
	while(i2!=n)
	{
		if(a[i1]>=b[i2])
		{
			if(c[i1]==d[i2])
			{
				a[i1]-=b[i2];
				i2++;
			}
			else
			{
				ans+=b[i2];
				a[i1]-=b[i2];
				i2++;
			}
		}
		else
		{
			if(c[i1]==d[i2])
			{
				b[i2]-=a[i1];
				i1++;
			}
			else
			{
				ans+=a[i1];
				b[i2]-=a[i1];
				i1++;
			}
		}
	}
	printf("%lld",ans/2);
	fclose(stdin);
	fclose(stdout);
	return 0;	
	
 } 
