#include<bits/stdc++.h>
using namespace std;
long long q[500010],ans[300010],a[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int w=0;
		for(int j=i;j<=n;j++)
		{
			bool e=0;int ww=0;
			for(int r=1;r<=w;r++)
			{
				if(q[r]==a[j])
				{
					e=1,ww=r;break;
				}
			}
			if(e)w=ww;
			else q[++w]=a[j];
		}
		for(int j=1;j<=w;j++)
		ans[q[j]]++;
		//cout<<endl;cout<<q[j]<<" ",
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
