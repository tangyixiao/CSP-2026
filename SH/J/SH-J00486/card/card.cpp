#include<bits/stdc++.h>
using namespace std;
int n=500005; 
int m=300005;
int a[500005];
int c[500005]={0};
bool d[500005];
int main()
{
   	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	memset(d,false,sizeof(d));
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		stack<int>q;
		for(int j=i;j<n;j++)
		{
			int y=a[j];
			if(d[y]==false)
			{
				d[y]=true;
				q.push(a[j]);
			}
			else
			{
				while(q.top()!=a[j])
				{
					d[q.top()]=false;
					q.pop();
				}
			}
		
		}
		for(int j=0;!q.empty();j++)
		{
			int k=q.top();
			c[k]++;
			q.pop() ;
		}
			memset(d,false,sizeof(d));
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
