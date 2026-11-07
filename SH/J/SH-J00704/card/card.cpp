#include<bits/stdc++.h>
using namespace std;
int a[500010],box[300010],vis[300010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int k = 1;k <= n;k++)
	{
		memset(vis,0,sizeof(vis));
		for(int i = k;i <= n;i++)
		{
			if(vis[a[i]])
			{
				for(int j = vis[a[i]];j < i;j++) 
				{
					if(vis[a[j]] == j) 
					{
						box[a[j]]--;
						vis[a[j]] = 0;
					}
				}
			}
			vis[a[i]] = i;
			box[a[i]]++;
		}
	}
	for(int i = 1;i <= m;i++) cout << box[i] << " ";
	return 0;
}
