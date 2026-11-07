#include<bits/stdc++.h>
using namespace std;

int n,m;
long long ans;
long long a[200005];

void dfs(int s,int len,long long sum)
{
	if(len == m)
	{
//		cout << sum << ' ';
		ans = max(sum,ans);
		return;
	}
	for(int i = s + 1;i <= n; ++ i)
	{
		dfs(i,len + 1,(sum & a[i]));
	}
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	cin >> n >> m;
	
	for(int i = 1;i <= n; ++ i)
	{
		cin >> a[i];
	}
	
	for(int i = 1;i <= n - m + 1; ++ i)
	{
		dfs(i,1,a[i]);
	}
	
//	cout << '\n';
	cout << ans;
	
	return 0;
}
