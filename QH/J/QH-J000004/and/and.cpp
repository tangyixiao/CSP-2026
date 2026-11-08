#include <iostream>
#include <cstdio>
using namespace std;

int n,m,ans=0;

int a[200005];
bool used[200005];


void dfs(int num,int sum)
{
	if(num==m+1)
	{
		ans=max(ans,sum);
		return;
	}
	if(sum==0)return;
	for(int i=1;i<=n;i++)
	{
		if(used[i])continue;
		used[i]=1;
		if(num==1)
		{
			dfs(num+1,a[i]);
		}
		else dfs(num+1,sum&a[i]);
		used[i]=0;
	}
}

int main()
{
	freopen("and.in","r",stdin);
 	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	dfs(0,1);
	cout << ans;
	/*
	5 3
	31 3 1 15 7
	4 2
	3 15 12 12
	*/
	fclose(stdin);
	fclose(stdout);
	return 0;
}
