#include <bits/stdc++.h>
using namespace std;

int n,m,vis[300005],cnt[300005];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	stack <int> st;
	for(int i = 1;i<=n;i++)
	{
		int tmp;
		cin>>tmp;
		st.push(tmp);
	}
	stack <int> s;
	for(int i = 1;i<=n;i++)
	{
		stack <int> q;
		int cur=st.top();
		st.pop();
		if(!vis[cur])
		{
			s.push(cur);
			while(!s.empty())
			{
				cnt[s.top()]++;
				vis[s.top()]=1;
//				cout << i<<'?'<<s.top()<<"?"<<cnt[s.top()]<<"\n";
				q.push(s.top());
				s.pop();
			}
			while(!q.empty())
			{
				s.push(q.top());
				q.pop();
			}
		}
		else
		{
			stack <int> q;
			bool flag=0;
			while(!s.empty())
			{
				if((s.top()==cur)||flag)
				{
					flag=1;
					q.push(s.top());
				}
				vis[s.top()]=0;
				s.pop();
			}
			while(!q.empty())
			{
				cnt[q.top()]++;
				vis[q.top()]=1;
//				cout <<i<<'!'<< q.top()<<'!'<<cnt[q.top()]<<endl;
				s.push(q.top());
				q.pop();
			}
		}
	}
	for(int i = 1;i<=m;i++)
	{
		cout << cnt[i]<<' ';
	}
	return 0;
}

