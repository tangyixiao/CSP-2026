#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
ll a[N];
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	ll i=1,j=n,ans=0;
	while(i<j)
	{
		if(c[i]==c[j])
		{
			int minn=min(a[i],a[j]);
			a[i]-=minn;
			a[j]-=minn;
		}
		else
		{
			int minn=min(a[i],a[j]);
			a[i]-=minn;
			a[j]-=minn;
			ans+=minn;
		}
		if(a[i]==0)
		{
			i++;
		}
		if(a[j]==0)
		{
			j--;
		}
	}
	cout<<ans;
	return 0;
}
