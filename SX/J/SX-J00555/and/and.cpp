#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int a[N],vis[N],vis1[N];
int cnt[35];
vector<int>b[35];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i = 1;i <= n;i++)
	{
		scanf("%d",&a[i]);
		for (int j = 0;j < 30;j++)
		{
			if(a[i]&(1<<j))
			{
				cnt[j]++;
				b[j].push_back(i);
			}
		}
	}
	int flag = -1;
	for (int i = 29;i >= 0;i--)
	{
		if(cnt[i]>=m)
		{
			flag = i;
			break;
		}
	}
	if(flag == -1)
	{
		printf("0");
		return 0;
	}
	int sz = b[flag].size();
	for (int i = 0;i < sz;i++)
	{
		vis[b[flag][i]]=1;
	}
	int ans = 1<<flag;
	for (int i = flag-1;i >= 0;i--)
	{
		if(cnt[i]<m)continue;
		int sum = 0;
		sz = b[i].size();
		for (int j = 0;j < sz;j++)
		{
			vis1[b[i][j]]=1;
			if(vis[b[i][j]]) sum++;
		}
		if(sum >= m)
		{
			ans += 1<<i;
			for (int j = 1;j <= n;j++)
			{
				if(vis[j]&&vis1[j])
				{
					vis[j]=1;
				}
				else
				{
					vis[j]=0;
				}
			}
		}
		for (int j = 1;j <= n;j++)
		{
			vis1[j]=0;
		}
	}
	printf("%d",ans);
	return 0;
}