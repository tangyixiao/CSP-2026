#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],fd[300001],no[300001],ev[300001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		stack<int> cd;		
		memset(fd,0,sizeof(fd));
		memset(no,0,sizeof(no));
		for(int j=i;j<=n;j++)
		{
			if(fd[a[i]]==0)
			{
				cd.push(a[i]);
				no[a[i]]=j-i+1;
			}
			else
			{
				while(cd.size()>=no[a[i]])
				{
					fd[cd.top()]==0;
					cd.pop();
				}
				cd.push(a[i]);
			}
		}
		int siz=cd.size();
		for(int j=0;j<=siz;j++)
		{
			ev[cd.top()]++;
			cd.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout << ev[i] << " ";
	}
	return 0;
}
