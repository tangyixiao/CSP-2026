#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[1010101],x,b[1001010];
queue<int>q,qq;
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		while(q.size())
		{
			int dao=q.front();
			if(dao==x)
			{
				while(q.size())
				{
					q.pop();
				}
				break;
			}
			qq.push(dao);
			q.pop();
		}
		qq.push(x);
		while(qq.size())
		{
			q.push(qq.front());
			b[qq.front()]++;
			qq.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<' ';
	}
	return 0;
}