#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005],b[500005],cnt1[300005],cnt2[300005],ad[300005];
//b是桌面,cnt1记录每局游戏是否出现，cnt2出现次数,ad卡牌首次出现位置;
int main()
{
	freopen("card1.in","r",stdin);
	freopen("card1.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i];
	}
	int i = 1;
	while(i <= n)
	{
		for(int r = 1;r <= n;r++)
		{
			b[r] = 0,ad[r] = 0,cnt1[r] = 0;
		}
		int x = n - i + 1, j = i;
		while(x--)
		{
			b[j] = a[j];
			if(cnt1[a[j]] = 1)
			{
				for(int k = ad[a[j]];k <= j;k++)
				{
					b[k] = 0;	
				}
				b[ad[a[j]]] = a[j];
				j = ad[a[j]];
				cnt1[a[j]] = 0;
			}
			cnt1[a[j]]++;
			ad[a[j]] = j;
			j++;
		}
		for(int l = 1;l <= j;l++)
		{
			cnt2[b[l]]++;
		}
		i++;
	}
	for(int i = 1;i <= m;i++)
		cout << cnt2[i] << " "; 
	return 0;
}
