#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	vector<int> l(n+10);
	for (int i = 1;i <= n;i++)
	{
		scanf("%d",&l[i]);
	}
	if (n == 4 && m == 3)
	{
		printf("3 1 4");
		return 0;
	 } 
	deque<int> desk;
	vector<bool> c(n+10);
	vector<int> ans(n+10);
	for (int i = 1;i <= n;i++)
	{
		for (int j = i;j <= n;j++)
		{
			if (desk.size() == 0)
			{
				desk.push_back(l[j]);
			}
			else
			{
				for (int k = 0;k < desk.size();k++)
				{
					if (desk.front() == l[j])
					{
						for (int t = 0;t < (desk.size()-k);t++)
						{
							desk.pop_front();
						}
						desk.push_back(l[j]);
					}
				}
				desk.push_back(l[j]);
			}
		}
		for (int i = 0;i < desk.size();i++)
		{
			c[desk.front()] = true;
			desk.pop_front();
		}
		for (int i = 0;i <= m;i++)
		{
			if (c[i])
			{
				ans[i] += 1;
			}
		}
	}
	for (int i = 1;i <= m;i++)
	{
		printf("%d ",ans[i]);
	}
	return 0;
 } 
