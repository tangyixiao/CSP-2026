#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n,m;
const int N=2e5+5;
ll a[N];
int cmp(ll x,ll y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	ll sum=a[1];
	for(int i=2;i<=m;i++)
	{
		sum=sum&a[i];
	}
	cout<<sum;
	return 0;
 } 
