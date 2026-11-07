#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=200005;
int a[N],dp[N];
bool flag[N];
ll anss,summ=-0x3f;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	if(m==n)
	{
		summ=a[1];
		for(ll i=2;i<=n;i++)
		{
			summ=(summ&a[i]);
		}
		cout<<summ;
		return 0;
	} 
	if(m==2)
	{
		for(ll i=1;i<=n;i++)
		{
			for(ll j=i+1;j<=n;j++)
			{
				anss=(a[i]&a[j]);
				summ=max(summ,anss);
			}
		}
		cout<<summ;
		return 0;
	}
	cout<<summ;
	return 0;
}
