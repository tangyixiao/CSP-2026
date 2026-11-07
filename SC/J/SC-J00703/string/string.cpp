#include<bits/stdc++.h>
using namespace std;
int n,a[200010];
char c[200010];
long long sum;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d  %c",&a[i],&c[i]);
	}
	int i=1,j=n;
	while(i<=j)
	{
		if(c[i]==c[j])
		{
			int minn=min(a[i],a[j]);
			a[i]-=minn;
			a[j]-=minn;
			if(a[i]>0)
			{
				j--;
			}
			else if(a[j]>0)
			{
				i++;
			}
			else
			{
				i++;
				j--;
			}
		}
		else
		{
			int minn=min(a[i],a[j]);
			sum+=minn;
			a[i]-=minn;
			a[j]-=minn;
			if(a[i]>0)
			{
				j--;
			}
			else if(a[j]>0)
			{
				i++;
			}
			else
			{
				i++;
				j--;
			}	
		}
	}
	printf("%lld",sum);
	return 0;
}