//ok
#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],cnt,ans;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%lld %c",&a[i],&c[i]);
		cnt+=a[i];
	}
	long long l=1,r=n,lc=a[1],rc=a[n];
	while(l<r)
	{
		if(lc>rc)
		{
			lc-=rc;
			if(c[l]==c[r])
			{
				r--;
				rc=a[r];
			}
			else
			{
				ans+=rc;
				r--;
				rc=a[r];
			}
		}
		else if(rc>lc)
		{
			rc-=lc;
			if(c[l]==c[r])
			{
				l++;
				lc=a[l];
			}
			else
			{
				ans+=lc;
				l++;
				lc=a[l];
			}
		}
		else if(rc==lc)
		{
			if(c[l]==c[r])
			{
				l++;
				r--;
				lc=a[l];
				rc=a[r];
			}
			else
			{
				ans+=rc;
				l++;
				r--;
				lc=a[l];
				rc=a[r];
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
