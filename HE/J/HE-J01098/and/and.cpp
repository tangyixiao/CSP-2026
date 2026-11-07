#include<bits/stdc++.h>
using namespace std;
long long a[100005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	if(n==m)
	{
		long long ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans & a[i];
		}
		cout<<ans;
	}
	else if(m==1)	{
		long long mx=0;
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
	}
	else if(m==2){
		long long mx=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j)	{
					mx=max(mx,a[i]&a[j]);
				}
			}
		}
		cout<<mx;
	}
	else if(m==n-1)
	{
		long long mx=a[1];
		for(int i=1;i<=n;i++)
		{
			mx=mx&a[i];
		}
		long long maxx=0;
		for(int i=1;i<=n;i++)
		{
			maxx=max(maxx,a[i]&mx);
		}
		cout<<maxx;
	}
	else
	{
	    long long maxx=0;
		for(int i=m+1;i<=n;i++)
		{
			int l=i-m-1;
			maxx=max(maxx,a[i]&a[l]);
		}
		cout<<maxx;
	}
	return 0;
}
