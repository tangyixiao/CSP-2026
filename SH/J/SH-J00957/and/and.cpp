#include<bits/stdc++.h>
using namespace std;
long long n,m,u1,pl=37,ans=0;
long long a[200005];
bool u2[37][200005];
vector<long long> u3[40];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		u1=1;
		for(long long j=1;j<=35;j++)
		{
			if(a[i]&u1)
			{
				u2[j][i]=1;
			}
			u1=(u1<<1);
		}
	}
	for(long long i=1;i<=n;i++)
	{
		u3[37].push_back(i);
	}
	for(long long i=35;i>=1;i--)
	{
		for(long long j=0;j<u3[pl].size();j++)
		{
			if(u2[i][u3[pl][j]])
			{
				u3[i].push_back(u3[pl][j]);
			}
		}
		if(u3[i].size()>=m)
		{
			pl=i;
			u1=(1<<(i-1));
			ans+=u1;
		}
	}
	cout<<ans;
	return 0;
} 
