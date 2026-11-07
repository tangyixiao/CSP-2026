#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[100005],c[100005];
stack<int>q;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	
	if(n>100000&&m<=2)
	{
		for (int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]==a[n])
			{
				c[a[i]]++;
			}
			else
			{
				c[a[i]]++;
				c[a[n]]++;
			}
		}
		for(int i=1;i<=m;i++)
		{
			cout<<c[i]<<" ";
		}
		return 0;
	}
	else if(n>100000)
	{
		int pp=0;
		for (int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]>=a[i-1])
			{
				pp++;
				c[a[i]]++;
			} 
		}
		if(pp==n)
		{
			for(int i=1;i<=m;i++)
			{
				c[i]=c[i]+c[i-1];
				cout<<c[i]<<" ";
			}
		}
		return 0;
	} 
	else
	{
		for (int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int j=1;j<=n;j++)
		{
			for (int i=j;i<=n;i++)
			{
				while(b[a[i]]==1)
				{
					if (q.top()!=a[i])
					{
						b[q.top()]=0;
						q.pop();
					}
					if (q.top()==a[i])
					{
						q.pop();
						break;
					} 
					
				}
				q.push(a[i]);
				b[a[i]]=1;
			}
			while(q.size()!=0)
			{
	//			cout<<j<<" "<<q.top()<<endl; 
				c[q.top()]++;
				b[q.top()]=0;
				q.pop();
			}
		}
		for(int i=1;i<=m;i++)
		{
			cout<<c[i]<<" ";
		} 
		return 0;
	}
	return 0;
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
