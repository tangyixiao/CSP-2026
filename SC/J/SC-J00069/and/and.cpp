#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m;
	cin>>n>>m;
	int a[100000]={};
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	ll t=a[1];
	for(ll i=1;i<=m;i++)
	{
		t=t&a[i];					
	}
	cout<<t;
	return 0;
}