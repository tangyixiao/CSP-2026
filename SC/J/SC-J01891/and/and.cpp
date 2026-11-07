#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long a[200005];
	long long b[200005]={0};
	long long c[200005]={0};
	long long n,m;
	cin>>n>>m;
	long long cnt=0;
	for(int i=0;i<n;i++)
	{
		long long p;
		cin>>p;
		while(p)
		{
			string s="";
			int w=p%2;
			char cc=w+'0';
			s=w+s;
			p/=2;
		}
		a[cnt]=s;
		cnt++;
	}
	long long ccnt=0;
	for(int i=0;i<cnt;i++)
	{
		for(int j=0;j<a[i].size();j++)
		{
			b[ccnt]=a[i][j]+b[ccnt]*10;	
		}
		ccnt++;
	}
	for(int i=0;i<ccnt;i++)
	{
		long long need=1;
		for(int j=ccnt-1;j>=0;j--)
		{
			c[i]=c[i][j]*need+c[i]*10;
			need*=2;
		}
	}
	for(int i=0;i<ccnt;i++)
	{
		long long max=c[0];
		if(c[i]>max) max=c[i];
	}
	cout<<max;
	return 0;
}