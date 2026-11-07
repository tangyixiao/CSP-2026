#include<bits/stdc++.h>
using namespace std;
bool b[200005],e;
int a[200005],n,m,ans,p=1;
bool c[200005][32];
int main() 
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		int x=a[i],l=0;
		while(x>0)
		{
			c[i][l]=x%2;
			x/=2,l++;
		}
	}
	for(int i=31;i>=0;i--)
	{
		int cnt=0;
		for(int j=1;j<=n;j++)
		{
			if(!b[j]&&c[j][i])
			{
				cnt++;
			}
			else if(e)
			{
				b[j]=1;
			}
		}
		if(cnt>=m)
		{
			if(e==0)
			{
				for(int j=1;j<=n;j++)
		        {
			        if(!c[j][i])
			        {
				        b[j]=1;
			        }
		        }   
			}
			c[0][i]=1,e=1;
		}
	}
	for(int i=0;i<=31;i++)
	{
		ans+=(c[0][i]*p);
		p*=2;
	}
	cout<<ans;
	return 0;
}
