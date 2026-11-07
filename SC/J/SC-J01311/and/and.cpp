#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[100086],byh[100086];
bool cmp(ll x,ll y)
{
	if (x<y)
	{
		return 0;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for (ll i=1;i<=n;i++)
	{
		byh[i]=a[i];
		if (i==m)
		{
			break;
		}
	}
	int bee=byh[1];
	for (ll i=2;i<=m;i++)
	{
		bee=(bee&byh[i]);
	}
	cout<<bee;
	return 0;
}