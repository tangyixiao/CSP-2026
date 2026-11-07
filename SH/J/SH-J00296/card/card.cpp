#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[5010];
bool flag[5010];
int ans[5010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >>n >> m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i<=n;i++)
	{
		int head = i,tail = i;
		flag[a[head]]=true;
		while(tail<n)
		{
			tail+=1;
			if (flag[a[tail]]==true)
			{
				for (int j = head;j<tail;j++)
				{
					flag[a[j]]=false;
				} 
				head=tail;
				flag[a[tail]]=true;
			}
			else flag[a[tail]]=true;
		}
		for (int j = head;j<=tail;j++)
		{
			ans[a[j]]++;
		}
		for (int i = 1;i<=n;i++) flag[i]=false;
	}
	for (int j = 1;j<=m;j++) cout << ans[j] <<" ";
	return 0;
}
