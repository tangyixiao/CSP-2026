#include<iostream>
using namespace std;
struct node
{
	int num;
	int last;
	int next;
};
int n,m;
int a[500010];
node c[500010];
int ans[300010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		cout<<(n+1)/2<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			c[j].num=a[j];
			c[j].last=j-1;
			c[j-1].next=j;
			for(int k=j;k>=i;k=c[k].last)
			{
				if(c[k].num==a[j])
				{
					c[c[k].last].next=j;
					c[j].last=c[k].last;
					break;
				}
			}
	    }
	    c[n].next=n+1;
	    for(int j=c[i-1].next;j<=n;j=c[j].next)
	    {
	    	ans[c[j].num]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
