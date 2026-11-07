#include<bits/stdc++.h> 
using namespace std;
long long n,m,a[500005],vis[300005],ans=0,cnt=0;
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
		string q;
		for(int j=i;j<=n;j++)
		{
			vis[a[j]]++;
			if(q.find(a[j]+'0')<=n&&q.find(a[j]+'0')>=0)
			{
				long long x=q.size()-1;
				while(x!=q.find(a[j]+'0'))
				{
					vis[q[x]-'0']--;
					q.pop_back();
					x--;
				}
				vis[a[j]]--;
			}
			else
			{
				q.push_back(a[j]+'0');
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(vis[i]!=0)
			cout<<vis[i]<<" ";
	}
}

