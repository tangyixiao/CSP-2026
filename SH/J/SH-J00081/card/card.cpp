#include<bits/stdc++.h>
using namespace std;
int a[500005];
int s[500005];
vector<int> q;
int main()
{	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{	
			int d=0;
			for(int h=0;h<q.size();h++)
			{	
				if(q[h]==a[j])
				{
					d=h;
				}
			}
			if(d)
			{
				for(int z=d;z<q.size();z++)
				{
					q.pop_back();	
				}	
				q.push_back(a[j]); 
			} 
			else
			{
				q.push_back(a[j]);
			}
		}
		while(!q.empty())
		{
			int f=q.front();
			q.pop_back();
			s[f]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<s[i]<<" ";
	}
}
