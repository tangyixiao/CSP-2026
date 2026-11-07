#include<bits/stdc++.h>
using namespace std;
int a[200101],p[201012];
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
	if(m==1)
	{
		cout<<n;
		return 0;
	}
	if(a[n]==1)
	{
		bool l=false;
		cout<<n<<" ";
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			p[1]=0,p[2]=0;
			for(int j=i;j<=n;j++)
			{
				p[a[j]]++;
				if(p[2]>1)
				{
					p[2]=1;
					p[1]=0;
				}
				if(p[1]>1)
				{
					p[1]=1;
					p[2]=0;
				}
			}
//			cout<<p[1]<<" "<<p[2]<<endl;
			if(p[2]==1)
			{
				++ans;
			}
		}
		
		cout<<ans;
	}
	else if(a[n]==2)
	{
		bool l=false;
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			p[1]=0,p[2]=0;
			for(int j=i;j<=n;j++)
			{
				p[a[j]]++;
				if(p[2]>1)
				{
					p[2]=1;
					p[1]=0;
				}
				if(p[1]>1)
				{
					p[1]=1;
					p[2]=0;
				}
			}
//			cout<<p[1]<<" "<<p[2]<<endl;
			if(p[1]==1)
			{
				++ans;
			}
		}
		cout<<ans<<" "<<n;
	}
	return 0;
}
//tu ling bao you wo a!QAQ
