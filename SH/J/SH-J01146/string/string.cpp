#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
long long cnt=1;
char c[200005];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	long long len=0;
	for(long long i=1;i<=n;i++)
	{
		len+=a[i];
	}
	long long ans=0;
	for(;cnt<=n;)
	{
		while(a[cnt]>0&&a[n]>0)
		{
			if(c[cnt]!=c[n])
			{
				ans++;
			}
			a[cnt]--;
			a[n]--;
			if(a[cnt]<=0||a[n]<=0)
			{
				if(a[cnt]<=0) cnt++;
				if(a[n]<=0) n--;
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
