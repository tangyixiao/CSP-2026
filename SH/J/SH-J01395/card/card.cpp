#include<bits/stdc++.h>
using namespace std;
int a[500010],table[500010],where[500010],q=0,ans[500010];
void in(int x)
{
	if(table[x]==0)
	{
	    q++;
	    table[x]++;
	    where[q]=x;
	}
	else
	{
		int p=0;
		for(int i=1;i<=q;i++)
		{
			if(where[i]==x)
			{
				p=i;
			}
		}
		for(int i=p+1;i<=q;i++)
		{
			table[where[i]]--;
			where[i]=0;
		}
		q=p;
	}
}
int main()
{
    freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			in(a[j]);
		}
		for(int i=1;i<=m;i++)
		{
			ans[i]+=table[i];
			table[i]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
} 
