#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],b[200005],l=1,ans,s=1,sum,x=2;
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
	}
	sort(a+1,a+1+n);
	for(int i=n;i>=n-m;i--)
	{
		int o=1,c=a[i];
		while(c)
		{
			b[l]+=(c%2)*o;
			o*=10;
			c/=2;
		}
		l++;
	}
	int w=b[1];
	for(int j=1;j<=w;j++)
	{
		w/=10;
		s++;
	}
	for(int i=2;i<=m;i++)
	{
		int o=1;
		ans=0;
		for(int j=s;j>=1;j--)
		{
			if(b[i-1]%10==1 && b[i]%10==1)
			  ans+=1*o;
			  o*=10;
			  b[i-1]/=10;
			  b[i]/=10;
		}
		b[i]=ans;
	}
	sum=b[m]%10;
	b[m]/=10;
	while(b[m])
	{
		sum+=b[m]%10*x;
		x*=2; 
		b[m]/=10;
	}
	cout<<sum;
	return 0;
}