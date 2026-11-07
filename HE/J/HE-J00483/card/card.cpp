#include <bits/stdc++.h>
using namespace std;
#define int long long

int a[51011]; 
int ans[31011];

signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	bool flag=true;
	a[0]=0x3f3f3f3f;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i]>a[i-1]) flag=false;
	}
	if (flag)
	{
		for (int i = 1; i <= m; i++)
		{
			cout << i << " ";
		}
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		int cnt[31011]={};
		int frs[31011]={};
		for (int j = i; j <= n; j++)
		{
			if (cnt[a[j]]==0) 
			{
				frs[a[j]]=j;
				cnt[a[j]]++;
			}
			else
			{
				for (int k = frs[a[j]]; k <= j-1; k++)
				{
					cnt[a[k]]--;
					cnt[a[k]]=max(cnt[a[k]], 0ll);
					if (cnt[a[k]]==0) frs[a[k]]=0;
				}
				frs[a[j]]=j;
				cnt[a[j]]++;
			}
		}
		for (int j = 1; j <= m; j++)
		{
			ans[j]+=cnt[j];
		}
	} 
	for (int i = 1; i <= m; i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}
//我想上电视 qwq awa 
//freopen();

