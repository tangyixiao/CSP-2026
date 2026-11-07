#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
int cnt[300005];
stack<int> stk;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		while(!stk.empty())
		{
			stk.pop();
		}
		memset(cnt,0,sizeof(cnt));
		for(int j=i;j<=n;j++)
		{
			while(cnt[a[j]])
			{
				cnt[stk.top()]--;
				stk.pop();
			}
			stk.push(a[j]);
			cnt[a[j]]++;
		}
		for(int j=1;j<=m;j++)
		{
			ans[j]+=(cnt[j] > 0);
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}
