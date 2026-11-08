//ok
#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],can[200005],ans,maxx,cann,start;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	cann=n;
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	for(long long bit=31;bit>=0;bit--)
	{
		int cnt=0;
		for(int i=1;i<=n;i++)
		{
			if((a[i]>>bit)%2)
			{
				cnt++;
			}
		}
		if(cnt>=m)
		{
			if(!start)
			{
				for(int i=1;i<=n;i++)
				{
					if((a[i]>>bit)%2)
					{
						can[i]=1;
						cann++;
					}
				}
				start=1;
				ans+=(1<<bit);
			}
			else
			{
				long long cntt=0;
				for(int i=1;i<=n;i++)
				{
					if((a[i]>>bit)%2 && can[i])
						cntt++;
				}
				if(cntt>=m)
				{
					ans+=(1<<bit);
					for(int i=1;i<=n;i++)
					{
						if((a[i]>>bit)%2==0 && can[i])
						{
							can[i]=0;
							cann--;
						}
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
