#include<bits/stdc++.h>
using namespace std;
int n,m;
long a[200010];
long long maxn = -1;
long sh[200010];
void dfs(int w,int g)
{
	if(g>m)
	{
		long long jjs = sh[1];
	//	cout<<sh[1]<<' ';
		for(int i = 2;i<=m;i++)
		{
		//	cout<<sh[i]<<' ';
			jjs = jjs&sh[i];
		}
		//cout<<"::"<<jjs;
		//cout<<endl;
		
		maxn = max(maxn,jjs);
		long sh[] = {};
	//	cout<<sh[1];
		return;
	}
	if(w>n)
	{
		return;
	}
	sh[g] = a[w];
	for(int i = w+1;i<=n;i++)
	{
		dfs(i,g+1);
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs(1,1);
	cout<<maxn;
	return 0;
}
