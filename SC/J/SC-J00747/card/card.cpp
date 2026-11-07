#include <bits/stdc++.h> 
using namespace std;
int n,m;
long long a[500005],b[300005],k[500005];
bool num[300005];
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
		memset(num,0,sizeof(num));
		memset(k,0,sizeof(k));
		int p=0;
		for(int j=i;j<=n;j++)
		{
			p++;
			if(num[a[j]]==1)
			{
				while(k[p-1]!=a[j])
				{
					p--;
			    }
			    p--;
				
			}
			k[p]=a[j];
			num[k[p]]=1;
			
		}
		for(int j=1;j<=p;j++)
		{
			b[k[j]]++;
		}
		
	}
	for(int i=1;i<=m;i++)
	{
	    cout<<b[i]<<" ";
	}
	
	return 0;
}