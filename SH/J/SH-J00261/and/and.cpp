#include <bits/stdc++.h>
using namespace std;
long long n,m,mx;
long long arr[200010];
void dfs(long long ans,int cnt,int i)
{
	if(cnt == m)
	{
		mx = max(mx,ans);
		return;
	} 
	if(i == n)
	{
		return;
	}
	dfs(ans & arr[i + 1],cnt + 1,i + 1);
	dfs(ans,cnt,i + 1);
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(long long i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	for(long long i = 1; i <= n - m + 1; i++)
	{
		dfs(arr[i],1,i);
	}
	cout << mx;
	return 0;
}
