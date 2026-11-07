#include<bits/stdc++.h>//ÌìÏÂžé¹«
using namespace std;
long long a,n,sum,ans;
char c[1000000050],t;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=0;i<n;i++)
	{
		cin>>a>>t;
		for(long long j=sum;j<sum+a;j++)
		{
			c[j]=t;
		}
		sum+=a;
	}
	/*for(long long i=0;i<sum;i++)
	{
		cout<<c[i];
	}
	cout<<sum<<'\n';*/
	for(long long i=0;i<sum/2;i++)
	{
		if(c[i]!=c[sum-i-1])ans++;
		//cout<<i<<'\n';
	}
	cout<<ans;
	return 0;
}
