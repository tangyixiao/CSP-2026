#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, m, a[500009], lst[300009], ans[300009], cnt[500009];
int main ()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	//saved
	memset (lst, 0xff, sizeof lst);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",a+i);
	}
	for (int i = n-1; i >= 0; i--)
	{
		lst[a[i]] = max(lst[a[i]], i);
		cnt[i] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		cnt[lst[a[i]]+1]+=cnt[i];
	}
	for (int i = 0; i < n; i++)
	{
//		cout << cnt[i] << endl;
		ans[a[i]] += cnt[i];
	}
	for (int i = 1; i <= m; i++)
	{
		printf("%d ", ans[i]);
	}
	return 0;
}
