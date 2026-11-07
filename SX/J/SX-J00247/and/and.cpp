#include<bits/stdc++.h>
#define ll long long
#define str string
#define N 200005
using namespace std;
ll m,n,a[N],mmax,mmmax;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	if(m==1)
	{
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
			mmmax=(mmmax,a[i]);
		}
		cout<<mmmax;
		return 0;
	}
	else	for(ll i=1;i<=n;i++)	cin>>a[i];
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=n;j++)
		{
			if(i==j)	continue;
			mmax=max(max((a[i]&a[j]),mmax),max(mmax,(a[j]&a[i])));
		}
	}
	cout<<mmax;
	return 0;
}