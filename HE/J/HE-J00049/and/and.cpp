#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==n){
		long long x=a[1];
		for(int i=2;i<=n;i++)
		{
			x=(x&a[i]);
		}
		cout<<x;
		return 0;
	}
	if(m==2)
	{long long x=0;
		for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
	{
		x=max(x,(a[i]&a[j]));
	}
	}
	cout<<x;
	return 0;
	}
	return 0;
}
