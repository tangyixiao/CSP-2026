#include <bits/stdc++.h>
using namespace std;

unsigned int n,m,a[200001];
bool v[200001];

unsigned int dfs(int k,unsigned int number)
{
	if(k == 0)
		return number;
	unsigned int maxn = 0;
	for(int i = 1;i <= n;i++)
	{
		if(!v[i])
		{
			v[i] = 1;
			if(k == m) maxn = max(maxn,dfs(k - 1,a[i]));
			else maxn = max(maxn,dfs(k - 1,number & a[i]));
			v[i] = 0;
		}
	}
	return maxn;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)cin >> a[i];
	cout << dfs(m,1);
	return 0;
}
