#include <iostream>
#include <vector>
#define ll long long
#define endl '\n'
using namespace std;
const int N=2e5+5;
int n,m;
ll ans,a[N];
ll calc(vector<ll> v)
{
	ll sum=v[0];
	for(int i=1;i<v.size();i++)
		sum&=v[i];
	return sum;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(n<=20)
	{
		for(int i=0;i<(1<<n);i++)
		{
			if(__builtin_popcount(i)!=m)
				continue;
			vector<ll> v;
			for(int j=0;j<n;j++)
				if(i&(1<<j))
					v.push_back(a[j+1]);
			ans=max(ans,calc(v));
		}
	}
	else if(m==1)
	{
		for(int i=1;i<=n;i++)
			ans=max(ans,a[i]);
	}
	else if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++)
			ans&=a[i];
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				ans=max(ans,a[i]&a[j]);
	}
	cout<<ans;
	return 0;
}