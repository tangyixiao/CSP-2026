#include<bits/stdc++.h>
using namespace std;
const int MAXN = 5e5 + 7;
const int MAXM = 3e5 + 7;
int num[MAXN], ans[MAXM], n, m;
vector<int> v[MAXM];
bool flag[MAXM];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
	{
		cin >> num[i];
		v[num[i]].push_back(i);
	}
	for(int i = 1; i <= n; i ++)
	{
		memset(flag, 0, sizeof flag);
		int l = -1, r = -1;
		for(int j = n; j >= i; j --)
		{
			if(v[num[j]][0] == j) continue;
			for(int k = 0; v[num[j]][k] < j; k ++)
			{
				if(v[num[j]][k] >= i)
				{
					if(l == -1 || l > v[num[j]][k]) l = v[num[j]][k];
					if(r == -1 || r < j - 1) r = j - 1;
					break;
				}
			}
		}
		for(int j = i; j <= n; j ++)
		{
			if((j < l || l == -1) || j > r)
			{
				if(!flag[num[j]])
				{
					ans[num[j]] ++;
					flag[num[j]] = 1;
				}
			}
		}
	}
	for(int i = 1; i <= m; i ++) cout << ans[i] << " ";
	cout << endl;
	return 0;
}
