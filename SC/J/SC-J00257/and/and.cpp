#include <bits/stdc++.h>
using namespace std;
int a[200005];int n;
int f[200005][2];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m;
	cin>>n>>m;
	int mx=-1;
	
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1)
	{
		cout<<mx;
		return 0;
	}
	sort(a+1,a+1+n);
	int ans=a[n];
	for(int i=1; i<=n; i++)
	{
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12
*/