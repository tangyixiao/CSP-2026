#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],mx = 0;
void dfs(long long add,long long num,int step)
{
	if(num == m)
	{
		//cout << add << ' ';
		mx = max(add,mx);
		return;
	}
	for(int i = step; i <= n; i++)
	{
		if(num + n - step + 1 < m) return;
		if(add <= mx) return;
		dfs((add & a[i]),num + 1,i + 1);
	}
}
const long long MAX = (1 << 30) - 1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	dfs(MAX,0,1);
	cout << mx;
	fclose(stdout);
	fclose(stdin);
	return 0;
}
