#include<bits/stdc++.h>
using namespace std;
typedef int ll;
const int N=2e5+5;
char a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,l=1;
	long long sum=0;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		ll m;
		char k;
		cin>>m>>k;
		for(ll j=1;j<=m;j++)
		{
			a[l++]=k;
		}
		sum+=m;
	}
	ll mid,minn=0;
	if(sum%2==1)
	{
		mid=(sum+1)/2;
		for(ll i=1;i<mid;i++)
		{
			if(a[i]!=a[sum+1-i])
			{
				minn++;
			}
		}
		cout<<minn;
	}
	else if(sum%2==0)
	{
		mid=sum/2;
		for(ll i=1;i<=mid;i++)
		{
			if(a[i]!=a[sum+1-i])
			{
				minn++;
			}
		}
		cout<<minn;
	}
	return 0;
}