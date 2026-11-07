#include<bits/stdc++.h>
using namespace std;
long long a[200005];
bool vis[200005];
long long maxx = 0;
int n,m;
void dfs(int idx,long long sum)
{
	if(idx==m+1)
	{
		maxx=max(maxx,sum);
		return;
	}
	if(sum<maxx)
	{
		return;
	}
	for(int i = 1;i<=n;i++)
	{
		if(vis[i])
		{
			continue;
		}
		vis[i]=1;
		dfs(idx+1,sum&a[i]);
		vis[i]=0;
	}
	return;
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i];
	}
	dfs(1,0x3f3f3f3f3f3f3f3f);
	cout << maxx<<endl;
	return 0;
}
