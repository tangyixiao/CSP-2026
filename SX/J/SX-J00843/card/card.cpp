#include <bits/stdc++.h>
using namespace std;
int a[500005],t[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		t[a[i]]++;
	}
	for (int i=1;i<=m;i++)
	{
		if (t[a[i]]!=0) cout<<n<<' ';
		else cout<<0<<' ';
	}
}