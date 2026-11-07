#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int ans2=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(m==2&&n*n<=100000000)
		{
			for(int j=1;j<i;j++)
			{
				ans2=max(ans2,a[j]&a[i]);
			}
		}
	}
	if(m==2&&n*n<=100000000)
	{
		cout<<ans2;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	int ans=a[1];
	for(int i=2;i<=m;i++)
	{
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}