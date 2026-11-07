#include<iostream>
#include<string>
using namespace std;
int st[500005],flag[300005],x[500005],ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)cin >> x[i];
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			if(j < i)st[j] = 0;
			else st[j] = x[j];
		}
		for(int f = i;f <= n;f++)
		{
			if(flag[st[f]] == 0)flag[st[f]] = 1;
			else
			{
				for(int j = 1;j < f;j++)st[j] = 0;
				flag[st[f]] = 0;
			}
		}
		for(int j = i;j <= n;j++)ans[st[j]]++;
		for(int j = 1;j <= m;j++)flag[j] = 0;
	}
	for(int j = 1;j <= m;j++)cout << ans[j] << " ";
	return 0;
}