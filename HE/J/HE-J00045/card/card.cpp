#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],ans[300005],c;
int cardplay(int a[500005],int b[500005],int x,int y,int cnt[300005])
{
	int twin=0,s,tn;
	for(int i=x-y;i<=x;i++)
	{
		if(i!=(x-y))
		{
			for(int s=i-1;s>=x-y;s--)
			{
				if(b[i]==b[s])
				{
					twin++;
					tn=s;
				}	
			}
		}
		if(twin>0)
		{
			for(int j=tn;j<i;j++)
			{
				b[j]=0;
			}
		}
	}
	for(int i=x-y;i<=x;i++)
	{
		if(b[i]!=0)	cnt[i]+=b[i];
	}
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
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(c=n;c>=1;c--)
		{
			cardplay(a,b,n,c,ans);
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i];
	}
	return 0; 
}
