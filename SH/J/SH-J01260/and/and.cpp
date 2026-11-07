#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y)
{
	if(x!=y)
	{
		return x>y;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	int ans=a[1];
	for(int i=1;i<=m;i++)
	{
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
