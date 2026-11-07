#include<bits/stdc++.h>
using namespace std;
int n,a[200010];
long long ans;
char c[200010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d %c",&a[i],&c[i]);
	}
	int l=1,r=n;
	while(l<r)
	{
		if(a[l]>a[r])
		{
			if(c[l]==c[r])
			{
				a[l]=a[l]-a[r];
				r--;
			}
			else
			{
				a[l]=a[l]-a[r];
				ans+=a[r];
				r--;
			}
		}
		 else if(a[r]>a[l])
		{
			if(c[l]==c[r])
			{
				a[r]=a[r]-a[l];
				l++;
			}
			else
			{
				a[r]=a[r]-a[l];
				ans+=a[l];
				l++;
			}
		}
		else
		{
			if(c[l]==c[r])
				l++,r--;
			else
			{
				ans+=a[l];
				l++,r--;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}