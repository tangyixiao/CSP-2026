#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n;
int a[N],c[N];
long long l=0,s=0,ans=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int i,j,mid;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		scanf("%d %c",&a[i],&c[i]);
		l+=a[i];
	}
	for(i=1;i<=n;++i)
	{
		s+=a[i];
		if(s>=(l>>1))
		{
			mid=i;
			break;
		}
	}
	for(i=1,j=n;i<=mid&&j>=mid;)
	{
		if(c[i]==c[j])
		{
			if(a[i]>a[j])
			{
				a[i]-=a[j];
				--j;
			}
			else if(a[i]<a[j])
			{
				a[j]-=a[i];
				++i;
			}
			else
			{
				++i;
				--j;
			}
		}
		else
		{
			if(a[i]>a[j])
			{
				a[i]-=a[j];
				ans+=a[j];
				--j;
			}
			else if(a[i]<a[j])
			{
				a[j]-=a[i];
				ans+=a[i];
				++i;
			}
			else
			{
				ans+=a[i];
				++i;
				--j;
			}
		}
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
