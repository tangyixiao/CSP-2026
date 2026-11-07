#include<bits/stdc++.h>
using namespace std;


int n,m;
int a[500005];
bool vis[200005]{0};
stack<int> st;
int ans[500005];

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		memset(vis,0,sizeof(vis));
		while(!st.empty())
		{
			st.pop();
		}
		for(int j=i;j<=n;j++)
		{
			st.push(a[j]);
			if(vis[a[j]])
			{
				st.pop();
				while(st.top()!=a[j])
				{
					int s=st.top();
					st.pop();
					vis[s]=0;
				}
			}
			else
			{
				vis[a[j]]=1;
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(vis[i])
			{
				ans[i]++;
				//cerr<<"    "<<a[j]<<"   "<<ans[a[j]]<<"\n";
			}
		}
		
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}