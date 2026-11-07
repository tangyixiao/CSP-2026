#include<bits/stdc++.h>
using namespace std;
long long n,m,lr[200006],vis[200006],ma,maa,cnt,rl;
void f(long long idx,long long sum)
{
	if(idx>n||sum==m)
	{
		if(m==sum)
		{
			long long lrrl=0;
			for(int i=1;i<=n;i++)
			{
				if(vis[i]==1) 
				{
					if(lrrl==0) lrrl=lr[i];
					else
					{
						lrrl=(lrrl&lr[i]);
					}
				}
			}
			ma=max(ma,lrrl);
		}
		return ;
	}
	vis[idx]=1;
	f(idx+1,sum+1);
	vis[idx]=0;
	f(idx+1,sum);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>lr[i];
		if(lr[i]!=i-1) rl=1;
		if(m==1) maa=max(maa,lr[i]);
		if(m==n)
		{
			if(i==1)
			{
				cnt=lr[i];
			}
			else
			{
				cnt=(cnt&lr[i]);
			}
		}
	}
	sort(lr+1,lr+n+1);
	if(m==1) cout<<maa;
	if(m==n) cout<<cnt;
	if(n>2000)
	{
		cout<<lr[n-m+1];
	}
	if(m!=n&&m!=1&&n<=2000)
	{
		f(1,0);
		cout<<ma;
	}
	return 0;
}
