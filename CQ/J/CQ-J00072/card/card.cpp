#include<bits/stdc++.h>
using namespace std;
int a[500010],b[500010],c[300010],d[300010];
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int cnt1=1;
		for(int j=i;j<=n;j++)
		{
			
			if(c[a[j]]!=0)
			{
				cnt1=c[a[j]];
				//c[a[j]]=cnt1;
				cnt1+=1;
			}
			else
			{
				b[cnt1]=a[j];
				c[a[j]]=cnt1;
				cnt1+=1;
			}
			//cnt1+=1;
			//cout<<cnt1<<" ";
		}
		for(int j=1;j<cnt1;j++)
		{
			//cout<<b[j]<<" ";
			d[b[j]]+=1;
		}
		for(int j=1;j<=m;j++)
		{
			//if(c[j]!=0)d[j]+=1;
			c[j]=0;
		}
		//cout<<"\n";
	}
	for(int i=1;i<=m;i++)
	{
		cout<<d[i]<<" ";
	}
    return 0;
}
//LOVE YKE
