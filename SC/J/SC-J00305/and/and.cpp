#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],x;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	if(m==2)
	{
		for(int i=1;i<=n;i++)
			for(int l=i+1;l<=n;l++)
			x=max(x,a[i]&a[l]);
		cout<<x;
		return 0;	
	}
	sort(a+1,a+n+1);
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	if(m==n)
	{
		for(int i=1;i<=n;i++)
		x=x&a[i];
		cout<<x;
		return 0;
	}
	int i=n;
	x=a[i];
	while(m)
	{
		x=a[i]&x;
		i--;
		m--;
	}
	cout<<x;
	return 0;
}