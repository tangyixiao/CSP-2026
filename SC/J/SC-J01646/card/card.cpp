#include<bits/stdc++.h>
#define ll long long
#define pp pair<ll,ll>
const ll N=8e5+1010; 
using namespace std;
ll read()
{
	ll x=0,f=1;
	char ch=getchar();
	while(ch>'9'||ch<'0')
	{
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9')
	{
		x=x*10+ch-48;
		ch=getchar();
	}
	return x*f;
}
ll n,m,a[N],ans[N],nex[N],cnt[N],cnt2[N],ls[N],k[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++) a[i]=read(),nex[ls[a[i]]]=i,ls[a[i]]=i;
	for(ll i=n;i>=1;i--)
	{
		if(nex[i]) cnt2[i]=1,k[i]=nex[i];
		else cnt[i]=1,k[i]=i+1;
	}
	for(ll i=1;i<=n;i++)
	{
		ans[a[i]]+=cnt[i];
		cnt2[i]+=cnt[i];
		if(cnt[k[i]]) cnt[k[i]]+=cnt2[i];
		else cnt2[k[i]]+=cnt2[i];
	}
	for(ll i=1;i<=m;i++)  cout<<ans[i]<<" ";
	return 0;
}