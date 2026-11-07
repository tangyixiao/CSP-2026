#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m;
struct st{
	bool r[35];
}s[200010];
ll das;
bool cmp(st a,st b)
{
	return a.r[das]>b.r[das];
}
ll ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		ll a;
		cin>>a;
		ll j=0;
		while(a)
		{
			s[i].r[j]=a%2;
			j++;
			a/=2;
		}
	}
	for(das=29;das>=0;das--)
	{
		sort(s+1,s+n+1,cmp);
		ll sum=0;
		for(int i=1;i<=n;++i)
		{
			if(s[i].r[das]==0) break;
			sum++;
		}
		if(sum<m) continue;
		else
		{
			ans=ans+(1<<das);
//			cout<<ans<<'\n';
			n=sum;
		}
	}
	cout<<ans;
}
