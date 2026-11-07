#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 3e5 + 10;
const int N = 5e5 + 10;
int start[M] = {};
int endy[M] = {};//表示每个数字出现的起点和终点的位置(下标) 
int ans[M] = {};
int n,m;
int a[N] = {};
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		if (start[a[i]] == 0)
		{
			start[a[i]] = i;
			endy[a[i]] = i;
		}
		else
		{
			endy[a[i]] = i;//表示a[i]数字最后一次出现在位置i 
		}
	}
	for (int T=1;T<=n;T++)//第T轮，从下标为T的开始 
	{
		for (int i=T;i<=n;i++)
		{
			if (endy[a[i]] != start[a[i]])//开始跳点
			{
				i = endy[a[i]];
				ans[a[i]]++;
			}
			else
			{
				ans[a[i]]++;
			}
		}
	}
	for (int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
