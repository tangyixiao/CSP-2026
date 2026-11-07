#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005];
ll n,m;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	cout<<a[n+1-m];
}
