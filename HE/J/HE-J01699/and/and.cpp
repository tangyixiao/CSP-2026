#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005];
int w[100005];
int f(int x)
{
	int as=0;
	if(x==2)
	{
		return 1;
	}
	while(x>=1)
	{
		
		x/=2;
		as++;
	}
	return as;
}
int ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		w[i]=f(a[i]);
	}
	if(n==m)
	{
		for(int i=2;i<=n;i++)
		{
			a[1]=a[1]&&a[i];
		}
		ans=a[1];
	}
	else if(m==1)
	{
		sort(a+1,a+n+1);
		ans=a[n];
	}
	cout<<ans;
	return 0;
}
