#include <iostream>
#include <queue>
using namespace std;
int a[300005],b[300005],c[300005];
queue <int> wy;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
		
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=i;j<=m;j++)
		{
			if(b[a[i]]==0)
			{
				b[a[i]]=i;
				wy.push(a[i]);
			}
			else
			{
				for(int j=b[a[i]]+1;j<=wy.size();j++)
				{
					wy.pop();
				}
			}
		}
		for(int k=1;k<=n;k++)
		{
			b[k]=0;
		}
		while(wy.size()>0)
		{
			c[wy.top()]++;
			wy.pop();
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<c[i]<<" ";
	}
	
} 
