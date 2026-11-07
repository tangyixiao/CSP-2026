#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+5;
int a[N],b[N],c[N],num[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(ll i=1;i<=n;i++)
	{
		ll l=1;
		memset(c,0,sizeof(c));
		memset(b,0,sizeof(b));
		for(ll j=i;j<=n;j++)
		{
			if(b[a[j]]==0)
			{
				b[a[j]]++;
				c[l++]=a[j];
			}
			else if(b[a[j]]>0)
			{
				memset(c,0,sizeof(c));
				memset(b,0,sizeof(b));
				l=1;
				c[l++]=a[j];
				b[a[j]]++;
			}
		}
		int t[N];
		memset(t,0,sizeof(t));
		for(int j=1;j<=l-1;j++)
		{
			num[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<num[i]<<' ';
	}
	return 0;
} 