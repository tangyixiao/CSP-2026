#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=5*1e5+10;
const ll  W=3*1e5+10;
ll n,m;
ll a[W],arr[N];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=n;i++)
	{
		cin>>arr[i];

	}
	for(ll i=1;i<=n;i++)
	{
		bool p[m+10]={0};
		ll s[m+10];
		ll h[m+10];
		for(ll j=i;j<=n;j++)
		{
			if(p[arr[j]]==1)
			{
				for(ll k=s[arr[j]];k<j;k++)
				{
				   p[h[k]]=0;
					h[k]=0;

				}
				p[arr[j]]=1;
				h[j]=arr[j];
				s[arr[j]]=j;
			}
			else
			{
				h[j]=arr[j];
				s[arr[j]]=j;
				p[arr[j]]=1;
			}
		}
		for(ll j=i;j<=n;j++)
		{
			if(h[j]!=0) a[h[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<a[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
