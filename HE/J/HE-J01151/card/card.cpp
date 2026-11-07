#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 10;
int n,m;

int b[N],las[N],a[N],ans[N];

signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;++ i) cin >> a[i];
	for(int i = 1;i <= n;++ i)
	{
		if(a[i] == a[i - 1]) b[i - 1] = 0;
		a[i] = 1;
		for(int j = 1;j <= i;++ j) if(b[i]) ans[a[i]]++;
	}
	for(int i = 1;i <= m;++ i) cout << ans[i] << " ";
	return 0;
}
