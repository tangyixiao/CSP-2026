#include<bits/stdc++.h>
using namespace std;
int a[200010][36],bck[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long ans=0;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		long long x,k=0;
		cin>>x;
		while(x)
		{
			k++;
			if(x%2==1)
			{
				a[i][k]=1;
			}
			x/=2;
		}
	}
	long long sum=1;
	for(int i=1;i<=30;i++) sum*=2;
	for(int i=31;i>=1;i--)
	{
		sum/=2;
		int cnt=0;
		for(int j=1;j<=n;j++)
		{
			if(!bck[j]&&a[j][i]==1)
			{
				cnt++;
			}
		}
		if(cnt<m) continue;
		ans+=max(1LL,sum*2);
		for(int j=1;j<=n;j++)
		{
			if(!bck[j]&&a[j][i]!=1)
			{
				bck[j]=1;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
