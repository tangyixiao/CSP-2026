#include <bits/stdc++.h>
using namespace std;
int a[500010],n,m,c[300010],ans[300010],p[300010];
void subtask1()
{
	for (int i=1;i<=n;i++)
	{
		int t=0;
		for (int j=i;j<=n;j++)
		{
			if (a[j]==t)
			{
				continue;
			}
			if (c[a[j]])
			{
				c[t]=0;
				t=a[j];
				//cout<<"!";
			}
			else
			{
				t=a[j];
				c[t]=1;
				//cout<<"$";
			}
			//cout<<j<<"#"<<t<<endl;
		}
		for (int i=1;i<=m;i++)
		{
			ans[i]+=c[i];
			c[i]=0;
			//cout<<ans[i]<<" ";
		}
		//cout<<endl;
	}
	for (int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
}
void subtask2()
{
	for (int i=1;i<=n;i++)
	{
		int t=0;
		for (int j=i;j<=n;j++)
		{
			if (a[j]==t)
			{
				continue;
			}
			if (c[a[j]])
			{
				//for (int k=)
				t=a[j];
				//cout<<"!";
			}
			else
			{
				t=a[j];
				c[t]=1;
				//k++;
				//p[t]=k;
				//cout<<"$";
			}
			//cout<<j<<"#"<<t<<endl;
		}
		for (int i=1;i<=m;i++)
		{
			ans[i]+=c[i];
			c[i]=0;
			//cout<<ans[i]<<" ";
		}
		//cout<<endl;
	}
	for (int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if (m<=2)
	{
		subtask1();
		return 0;
	}
	return 0;
}
