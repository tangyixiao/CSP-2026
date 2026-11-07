#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n,m;
int a[N];
int maxx = INT_MIN;
void dfs(int ans,int sum,int bian)
{
	if(sum == m)
	{
		maxx = max(maxx,ans);
		return;
	}
	if(bian == n + 1) return;
	if(sum == 0)
	{
		dfs(a[bian],sum + 1,bian + 1);
		dfs(0,sum,bian + 1);
	}
	else
	{
		dfs(ans & a[bian],sum + 1,bian + 1);
		dfs(ans,sum,bian + 1);
	}
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i = 1;i <= n;i ++)
    {
    	cin >> a[i];
	}
	dfs(0,0,1);
	cout << maxx;
	return 0;
}
