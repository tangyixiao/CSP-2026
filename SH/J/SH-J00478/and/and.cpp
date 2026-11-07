#include<bits/stdc++.h>//ÌìÏÂžé¹«
using namespace std;
long long n,m,sum,a[200020],ans;
int andl(int x,int y)
{
	return x&y;
}
void dfs(int x,int c,int j)
{
	if(c>m)
	{
		sum=x;
		return ;
	}
	for(int i=j;i<n;i++)
	{
		dfs(andl(x,a[i]),c+1,i);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-m;i++)
	{
		/*sum=a[i];
		for(int j=1;j<=m;j++)
		{
			sum=andl(sum,a[i+j]);
			cout<<sum<<' '<<a[i+j];
		}
		cout<<'\n';*/
		dfs(a[i],0,i);
		ans=max(ans,sum);
	}
	cout<<ans;
	return 0;
}
