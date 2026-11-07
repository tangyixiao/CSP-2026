#include<iostream>
using namespace std;
int n,m;
int a[200010][40];
int vis[200010];
int sum[40];
int ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		int j=0;
		while(x)
		{
			a[i][j]=x&1;
			sum[j]+=x&1;
			j++;
			x>>=1;
		}
	}
	int maxi,maxn;
	for(int i=30;i>=0;i--)
	{
		if(sum[i]>=m)
		{
			maxi=i;
			maxn=sum[i];
			break;
		}
	}
	ans+=1<<maxi;
	while(maxn>=m)
	{
		for(int i=1;i<=n;i++)
		{
			if(!vis[i]&&(!a[i][maxi]))
			{
				vis[i]=1;
				for(int j=0;j<maxi;j++)
				{
					sum[j]-=a[i][j];
				}
			}
		}
		bool flag=false;
		for(int i=maxi-1;i>=0;i--)
		{
			if(sum[i]>=m)
			{
				maxi=i;
			    maxn=sum[i];
			    flag=true;
			    break;
			}
		}
		if(!flag)
		{
			break;
		}
		ans+=1<<maxi;
	}
	cout<<ans<<endl;
	return 0;
}
