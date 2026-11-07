#include <bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5;
int n,m,a[MAXN]; //n局，n张牌，输出1~m的点数出现了多少次，a为所有牌的点数
int sum=1; //游戏轮数
int ans[MAXN];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i=0;i<n;i++) cin >> a[i];
	while (n--)
	{
		int b[MAXN];
		for (int i=sum-1;i<n;i++)
		{
			b[i]=a[i];
			for (int j=sum-1;j<i;j++)
			{
				if (b[j]==b[i])
				{
					for (int k=j+1;k<=i;k++)
					{
						b[k]=0;
					}
				}
			}
		}
		for (int i=0;i<n;i++) ans[b[i]]++;
		sum++;
	}
	for (int i=1;i<=m;i++) cout << ans[i] << " ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
