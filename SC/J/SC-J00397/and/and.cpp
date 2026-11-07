#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int ans, n, m, a[200005];
void dfs(int x, int la, int y)
{
	if(y==m)
	{
		ans=max(ans, x);
		return;
	}
	for(int i=la+1;i<=n;i++)
	{
		dfs(x&a[i], i, y+1);
	}
	return;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dfs((1<<31)-1, 0, 0);
	cout<<ans;
	return 0;
}