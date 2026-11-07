#include<bits/stdc++.h>
using namespace std;
int n,m,maxx;
int a[200005];
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1)
	{
		for(int i=1;i<=n;i++)maxx=max(maxx,a[i]);
		cout<<maxx;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				maxx=max(maxx,a[i]&a[j]);
		cout<<maxx;
	}
	else if(m==n)
	{
		int ans=a[1];
		for(int i=2;i<=n;i++)ans=ans&a[i];
		cout<<ans;
	}
	else
	{
		sort(a+1,a+n+1,cmp);
		int ans=a[1];
		for(int i=1;i<=m;i++)ans=ans&a[i];
		cout<<ans;
	}
	return 0;
}
