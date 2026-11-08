#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010],maxa=-1,f,f1,ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxa=max(a[i],maxa);
		if(a[i]%2!=1) f=1;
		if(a[i]!=i-1) f1=1;
	}
	if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;i++)
		ans&=a[i];
	}
	else if(m==1)
	ans=maxa;
	else if(m==2)
	{
		for(int i=1;i<=n-1;i++)
		{
			for(int j=i+1;j<=n;j++)
			ans=max(a[i]&a[j],maxa);
		}
	}
	else if(f==0)
	{
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
	}
	else if(f1==0)
	{
		sort(a+1,a+n+1);
		ans=a[n];
		for(int i=n-1;i>=n-m+1;i--)
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
