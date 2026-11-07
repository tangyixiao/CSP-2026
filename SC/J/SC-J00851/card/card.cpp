#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],l,p[300005],t[300005],ans[300005];
deque<int> q;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = i;j <= n;j++)
		{
			if(t[a[j]] == 1)
			{
				while(q.back() != a[j])
				{
					t[q.back()] = 0;
					q.pop_back();
				}
				q.pop_back(); 
			}
			q.push_back(a[j]);
			t[a[j]] = 1;
		}
		while(!q.empty())
		{
			
			if(p[q.back()] == 0)
				ans[q.back()]++;
			p[q.back()]++;
			q.pop_back();
		}
		for(int j = 1;j <= m;j++)
		{
			t[j] = 0;
			p[j] = 0;
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << ans[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}