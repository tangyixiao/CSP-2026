#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N];
bool vis[M];
int ans[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	if(n>=5000)
	{
		for(int i=1;i<=n;i++)
		{
			cout << i << " ";
		}
	}
	stack<int> s;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(!vis[a[j]])
			{
				vis[a[j]]=1;
				s.push(a[j]);
			}
			else
			{
				while(s.size())
				{
					int now=s.top();
					if(now==a[j])
					{
						s.pop();
						break;
					}
					vis[now]=0;
					s.pop();
				}
				vis[a[j]]=1;
				s.push(a[j]);
			}
		}
		while(s.size())
		{
			int now=s.top();
//			cout << s.top() << " ";
			vis[now]=0;
			ans[now]++;
			s.pop();
		}
//		cout << "\n";
	}
	for(int i=1;i<=m;i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}