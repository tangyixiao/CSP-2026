#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],pre[300005],last[300005];
bool use[300003];
queue<int>q;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin >> n >> m;
	for(int p=1;p<=n;p++)
	{
		cin >> a[p];
	}
	for(int u=n;u>=1;u--)
	{
		if(use[a[u]]==0)
		{
			last[a[u]]=u;
			use[a[u]]=1;
			q.push(a[u]);
			queue<int>ti=q;
			while(!ti.empty())
			{
				int y=ti.front();
				pre[y]++;
				ti.pop();
			}
		}
		else if(use[a[u]]==1)
		{
			queue<int>t1=q,t2;
			while(t1.front()!=a[u])
		    {
		    	t2.push(t1.front());
		    	t1.pop();
			}
			for(int l=1;l<=m;l++)
			{
				use[l]=0;
			}
			t2.push(a[u]);
			while(!t2.empty())
			{
				use[t2.front()]=1;
				int y=t2.front();
				pre[y]++;
				t2.pop();
			}
		}
	}
	pre[a[n]]=n;
	for(int l=1;l<=m;l++)
	{
		cout << pre[l] << " ";
	}
	return 0;
}
