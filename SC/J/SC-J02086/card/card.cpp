#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m;
int a[500005],ccf[300005],fck[300005];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		ccf[a[i]]++;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ccf[i]<<" ";
	}
	return 0;
}