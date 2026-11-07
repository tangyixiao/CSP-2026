#include<bits/stdc++.h>
using namespace std;
long long n,m,ans,k=0,ans1,ans2;
bool fla=1;
bool c[200005][32];
long long a[200005];
bool b[200005];
bool wei[32];
void jin2(long long n,int b)
{
	int i=1;
	while(n!=0)
	{
		c[b][i]=n%2;
		n/=2;
		i++;
	}
	
}
		int main()
		{
		
		freopen("and.in","r",stdin);
		freopen("and.out","w",stdout); 
		cin>>n>>m;
			for(int i=1;i<=n;i++)
			{
				cin>>a[i];
			}
			
			for(int i=1;i<=n;i++)
			{
				jin2(a[i],i);
			}
			for(int j=31;j>=1;j--)	
			{
				ans=0;
				if(fla)
				for(int i=1;i<=n;i++)
				{
					if(c[i][j])
					ans++;
				}
				
					else
					for(int i=1;i<=n;i++)
					{
						if(c[i][j]&&b[i])
						ans++;
					}
				if(ans>=m)
				{
					wei[j]=1;
					if(fla)
					{fla=0;
					for(int i=1;i<=n;i++)
						{
							if(c[i][j])
							{
								b[i]=1;
							}
						}
					}
					else
					for(int i=1;i<=n;i++)
					{
						if(!c[i][j]&&b[i])
						b[i]=0;
					}
				}
				
			}
			for(int i=1;i<=n;i++)
			{
				if(wei[i])
				{
					int ji=1;
					for(int j=i-1;j>=1;j--)
					{
						ji*=2;
					}
					k+=ji;
				}
			}
			cout<<k; 
			return 0;
		}