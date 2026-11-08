#include<bits/stdc++.h>

using namespace std;
int n;
long long a[200005],ans;
int l,r,m;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		cin>>c[i];
	}
	l=1;
	r=n;
	while(l<r)
	{
		if(c[l]==c[r])
		{
			m=min(a[l],a[r]);
			a[l]-=m;
			a[r]-=m;
			if(a[l]==0)
			{
				l++;
			}
			if(a[r]==0)
			{
				r--;
			}
		}
		else
		{
			m=min(a[l],a[r]);
			a[l]-=m;
			a[r]-=m;
			ans+=m;
			if(a[l]==0)
			{
				l++;
			}
			if(a[r]==0)
			{
				r--;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}
