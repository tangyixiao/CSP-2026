#include<bits/stdc++.h>
#define LL long long
#define IC ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
const LL N=2e5+5;
LL n,m,a[N],Max,sum=(1<<30)-1;
LL p[N]={(1<<30)-1},q[N];
int main()
{
  	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	IC
	cin>>n>>m;
	q[n+1]=(1<<30)-1;
	for(LL i=1;i<=n;i++)
	{
		cin>>a[i];
		Max=max(Max,a[i]);
		sum&=a[i];
		p[i]=p[i-1]&a[i];
	}
	for(LL i=n;i;i--)
	{
		q[i]=q[i+1]&a[i];
	}
	if(n<=20)
	{
		LL ans=0;
		for(LL s=0;s<(1<<n);s++)
		{
			LL cnt=0,t=(1<<30)-1;
			for(LL i=1;i<=n;i++)
			{
				if((s>>(i-1))&1)
				{
					cnt++;
					t&=a[i];
				}
			}
			if(cnt==m) ans=max(ans,t);
		}
		cout<<ans;
		return 0;
	}
	if(m==1)
	{
		cout<<Max;
		return 0;
	} 
	if(m==n)
	{
		cout<<sum;
		return 0;
	}
	if(m==2)
	{
		LL ans=0;
		for(LL i=1;i<=n;i++)
		{
			for(LL j=i+1;j<=n;j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1)
	{
		LL ans=0;
		for(LL i=1;i<=n;i++)
		{
			ans=max(ans,p[i-1]&q[i+1]);
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1);
	LL u=(1<<30)-1;
	for(LL i=n-m+1;i<=n;i++)
	{
		u&=a[i];
	}
	cout<<u;
	return 0;
}