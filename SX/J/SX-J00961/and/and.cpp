#include<bits/stdc++.h>
using namespace std;
long long a[200010];
long long n,m,ma=LLONG_MIN;
void dfs(int k,int s,int z)
{
	if(k-1==m)
	{
		if(ma<s)
		{
			ma=s;
		}
		return;
	}
	for(int i=z;i<=n;i++)
	{

		if(s==0)
		{
		    dfs(k+1,a[i],i+1);
		}
		else
		{
			dfs(k+1,s&a[i],i+1);
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	ma=LLONG_MIN;
	dfs(1,0,1);
	cout<<ma;
	return 0;
}