#include<bits/stdc++.h>
#define ll long long
#define str string
#define N 500005
using namespace std;
ll n,m,f[N],tot;
struct uct{ll num,id;}a[N];
bool cmp(uct x,uct y){return x.id<y.id;}
void qi(ll l,ll r){for(ll i=l;i<=r;i++){f[i]=0;}return ;}
ll ef(ll l,ll r,ll z)
{
	if(l>r)	return -1;
	ll mid=(l+r)/2;
	if(a[mid].num>z)	ef(l,mid-1,z);
	if(a[mid].num<z)	ef(mid+1,r,z);
	if(a[mid].num==z)	return mid;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i].num;
		a[i].id=i;
	}
	for(ll i=1;i<=n;i++)
	{
		sort(a+1,a+n+1,cmp);
		qi(1,N);
		ll num=0;
		for(ll j=i;j<=n;j++)
		{
			ll e=lower_bound(f+1,f+num+1,a[i])-f;
			if(f[e]!=a[i].num)
			{
				num++;
				f[num]=a[i].num;
			}
			else
			{
				qi(e,num);
				num-=e;
				f[num]=a[i].num;
			}
		}
		ll w=lower_bound(f+1,f+num+1,i)-f;
		if(f[w]==i)	tot++;
	}
	cout<<tot;
	return 0;
}