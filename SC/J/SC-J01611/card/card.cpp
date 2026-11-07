#include<bits/stdc++.h>
using namespace std;
int m,n,a[99999],sum[99999],b[99999][99999];
bool q[99999][99999],c[99999][99999];
void qp(int x)
{
	for(int i=x;i<=n;i++)
	    if(b[x][i]==x)
	        sum[x]++;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
	    cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int m[99999];
		for(int j=i;j<=n;j++)
		{
			if(q[i][a[j]]==0)
			{
				b[i][j]=a[j];
				c[i][a[j]]=1;
				m[a[j]]=j;
			}
			else
			{
				int x=1;
				while(m[a[j]]<j){
				    b[i][m[a[j]]+x]=0;
				    i++;}
				m[a[j]]=j;
			}
		}
		qp(i);
	}
	for(int i=1;i<=m;i++)
	    cout<<sum[i];
	return 0;
}