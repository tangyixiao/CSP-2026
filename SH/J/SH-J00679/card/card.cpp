#include<bits/stdc++.h>
using namespace std;

int n, m;
const int N = 5e5 + 5;
const int M = 3e5 + 5;
int arr[N]; // 卡牌点数 
int ans[M];
int now[M];
int num_pos[M];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(int i = 1; i <= n; i++) cin>>arr[i];
	for(int i = 1; i <= n; i++)
	{
		int now_card_cnt = 0;
		for(int j = i; j <= n; j++)
		{
			// 出第j张牌，牌的点数为arr[j] 
			if(num_pos[arr[j]] == 0) // 不在桌上 
			{
				num_pos[arr[j]] = j;
				now_card_cnt++;
				now[now_card_cnt] = arr[j];
			}
			else // 桌面清理大师 
			{
				for(int k = num_pos[arr[j]] + 1; k <= now_card_cnt; k++)
				{
					num_pos[now[k]] = 0;
				}
				now_card_cnt = num_pos[arr[j]];
			}
		}
		for(int j = 1; j <= m; j++)
		{
			if(num_pos[j] != 0) ans[j]++;
			num_pos[j] = 0;
		}
	}
	for(int i = 1; i <= m; i++) cout<<ans[i]<<" ";
	return 0;
}
