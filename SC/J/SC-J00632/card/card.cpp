#include<bits/stdc++.h>
using namespace std;
int ans=0,n,m,a[100005],b[100005];
bool f[10005];
queue<int> q;
int main()
{	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];	
	}
	int k=m,o=1;	
	while(1)
	{
		memset(f,true,sizeof(f));
		//memset(b,0,sizeof(f));
		if(k<0)
		{
			for(int i=1;i<=n;i++)
			{
				if(b[i]!=0)
				{
					cout<<b[i]<<" ";
				}
			}
			return 0;
		}
		for(int i=o;i<=n;i++)
		{
			q.push(a[i]);
			if(f[a[i]]==true)
			{
				f[a[i]]=false;
			}
			else
			{
				for(int j=1;j<=i-1;j++)
				{
					if(q.front()!=a[i])
					{
						f[a[i]]=true;
					}
					q.pop();
				}
			}
		}
		for(int i=1;i<=q.size()+1;i++)
		{
			int l=q.front();
			//cout<<"第"<<o<<"局剩下牌："<<l<<endl;
			++b[l];
			q.pop();
		}
		--k;
		++o; 
	}	
} 