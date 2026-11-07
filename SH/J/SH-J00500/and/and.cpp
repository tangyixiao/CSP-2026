#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int c[m+1];
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++)
	{
		c[i]=a[n-i+1];
	}
	int sum=c[1];
	for(int i=1;i<=m;i++)
	{
		sum&=c[i];
	}
	cout<<sum;
	return 0;
} 
