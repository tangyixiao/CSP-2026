#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],f[200005],maxn = 0,maxx;
int main()
{
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
		if(i = 0)
			maxx = a[i];
		maxx = maxx & a[i];
		maxn = max(maxn,a[i]);
	}
	if(m == 1)
	{
		cout << maxn;
		return 0;
	}
	else if(m == n)
	{
		cout << maxx;
		return 0;
	}
	cout << maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}