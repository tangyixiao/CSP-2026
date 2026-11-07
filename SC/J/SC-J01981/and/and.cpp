#include<bits/stdc++.h>
using namespace std;
int a[2000005],ans[2000005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxx=-1;
	cin>>n>>m;
	a[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		ans[i]=(a[i-1]&a[i]);
		maxx=max(ans[i],ans[i-1]);
	}
	cout<<maxx;
	return 0;