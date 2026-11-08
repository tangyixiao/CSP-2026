#include<bits/stdc++.h>
using namespace std;
long long m,n,pos,q[500005],card[500005],i,j,k,l,ans[300005],last_app[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>card[i];
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(last_app[card[j]]!=0)
			{
				for(k=last_app[card[j]]+1;k<=pos;k++)
				{
					last_app[q[k]]=0;
					q[k]=0;
				} 
				pos=last_app[card[j]];
			}
			else
			{
				pos++;
				q[pos]=card[j];
				last_app[card[j]]=pos;
			}
		}
		for(j=1;j<=pos;j++)
		{
			ans[q[j]]++;
			last_app[q[j]]=0;
			q[j]=0;
		}
		pos=0;
	}
	for(i=1;i<=m;i++)
		cout<<ans[i]<<' ';
 	return 0;
}
