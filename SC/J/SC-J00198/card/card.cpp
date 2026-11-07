#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int vis[1000005],geshu[1000005];
stack<int> s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m,t=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		//stack<int> s;
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++)
		{
			if(vis[a[j]]==0)
			{
				
				s.push(a[j]);
				
				vis[a[j]]=1;
				//geshu[a[i]]++;
				//cout<<vis[1]<<' '<<vis[2]<<' '<<vis[3]<<endl;
			}
			else 
			{
				while(s.top()!=a[j])
				{
					vis[s.top()]=0;
					//geshu[a[i]]--;
					s.pop();
				}
				//cout<<vis[1]<<' '<<vis[2]<<' '<<vis[3]<<endl;
			}
			
		}
		while(!s.empty())
		{
			geshu[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<geshu[i]<<' ';
	}
	return 0;
}