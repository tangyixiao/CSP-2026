#include<bits/stdc++.h>
#define MAXN 500010
using namespace std;
int a[MAXN], n, m, cnt[MAXN], tmp[MAXN];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++)cin >> a[i];
	if(n<=500)
	{
		for(int i=1; i<=n; i++)
		{ 
			memset(tmp, 0, sizeof tmp);
			for(int j=i; j<=n; j++)
			{
				tmp[j-i+1]=a[j];
				bool flag=1;
				for(int k=1; k<j-i+1; k++)
				{
					if(tmp[k]==tmp[j-i+1] && tmp[k]!=0)flag=0;
					tmp[k]*=flag;
				}
			}
			for(int j=1; j<=n; j++)cnt[tmp[j]]++;
		}
		for(int i=1; i<=m; i++)cout << cnt[i] << ' ';
	}
	else
	{
		for(int i=1; i<=n; i++)
		{
			int cur;
			bool vis[MAXN];
			memset(tmp, 0, sizeof tmp);
			for(int j=i; j<=n; j++)
			{
				tmp[j-i+1]=a[j];
				if(vis[a[j]])
				{
					vis[a[j]]=0;
					cur=j+1;
				}
				else vis[a[j]]=1;
			}
			for(int i=cur; i<=n; i++)cnt[a[i]]++;
		}
		for(int i=1; i<=m; i++)cout << cnt[i] << ' ';
	}
	return 0;
}//dnys 
