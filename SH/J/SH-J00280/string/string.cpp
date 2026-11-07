#include <iostream>
#include <cstdio>
#define int long long 
using namespace std;
int n, a[200005];
char c[200005];
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i] >> c[i];
	int j = n+1, cntleft=0, cntright=0, ans = 0;
	for(int i = 1; i <= n; i++)
	{
		cntleft+=a[i];
		int need = cntright-cntleft+a[i];
		if(c[j]!=c[i]) ans += min(need,a[i]);
		while (cntleft>cntright)
		{
			j--;
			int temp = cntleft-cntright;
			cntright+=a[j];
			if(c[j] != c[i]) ans += min(temp, a[j]);
		}
	}
	cout << ans/2;
}
