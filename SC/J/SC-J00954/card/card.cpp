#include<bits/stdc++.h>
using namespace std;
const int N=500005,M=300005;
int n,m,nt;
int a[N],ct[M],b[N];
int fun()
{
	for(int i=1;i<n;i++)
	{
		if(a[i]>=a[i+1])
		{
			return 0;
		}
	}
	return 1;
}
int fun1()
{
	for(int i=1;i<n;i++)
	{
		if(a[i]<=a[i+1])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(fun()||fun1())
	{
		for(int i=1;i<=n;i++)
		{
			cout<<i<<" ";
		}
	}
	return 0;
} 