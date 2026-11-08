#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
bool b[N];
int n,m;
int ans=0;
void dfs(int d,int k)
{
	if(k==m)
	{
		ans=max(ans,d);
		return ;
	}
	for(int i=0;i<n;i++)
	{
		if(!b[i])
		{
			b[i]=1;
			dfs(d&a[i],k+1);
			b[i]=0;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int i;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	for(i=0;i<n;i++)
	{
		b[i]=1;
		dfs(a[i],1);		
	}
	cout<<ans;
	return 0;
}
