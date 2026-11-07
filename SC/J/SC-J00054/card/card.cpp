#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m;
int a[N],ans[N];
queue<int> q[2];
signed main()
{
	//freopen("test.in","r",stdin);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	int t=n;
	while(t)
	{
		while(!q[0].empty())q[0].pop();
		while(!q[1].empty())q[1].pop();
		for(int i=n-t+1;i<=n;i++)
		{
			if(q[0].empty())q[0].push(a[i]);
			else
			{
				while(!q[0].empty() && q[0].front()!=a[i])
				{
					q[1].push(q[0].front());
					q[0].pop();
				}
				if(q[0].front()==a[i])
				{
					while(!q[0].empty())
					q[0].pop();
				}
				while(!q[1].empty())
				{
					q[0].push(q[1].front());
					q[1].pop();
				}
				q[0].push(a[i]);
			}
		}
		while(!q[0].empty())
		{
			ans[q[0].front()]++;
			q[0].pop();
		}
		t--;
	}
	for(int i=1;i<=m;i++)
	cout<<ans[i]<<" ";
	return 0;
}