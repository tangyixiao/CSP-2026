#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+1,MAXX=3e5+1;
int a[MAXN];
int sum[MAXX]={0};
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		stack<int> p;
		set<int> s;
		for(int j=i;j<=n;j++)
		{
			if(s.find(a[j])==s.end())
			{
				s.insert(a[j]);
				p.push(a[j]);
			}
			else
			{
				while(p.top()!=a[j])
				{
					s.erase(p.top());
					p.pop();
				}
			}
		}
		while(!p.empty())
		{
			sum[p.top()]++;
			p.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<sum[i]<<" ";
	}
	return 0;
}