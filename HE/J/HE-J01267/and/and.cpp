#include <iostream>
#include <algorithm>
using namespace std;
long long a[200001];
bool b[200001][31];
long long qqq(bool l[])
{
	long long k=1;
	long long sum=0;
	for(int x=0;x<31;x++)
	{
		sum+=l[x]*k;
		k=k*2;
	}
	return sum;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int x=0;x<n;x++)
	{
		cin>>a[x];
	}
	sort(a,a+n);
	long long r=0;
	for(int x=0;x<n;x++)
	{
		a[x]++;
		r=2147483648/2;
		for(int y=0;y<31;y++)
		{
			if(r<a[x])
			{
				a[x]-=r;
				b[x][30-y]=1;
			}
			else
			{
				b[x][30-y]=0;
			}
			r/=2;
		}
	}
	bool s[31];
	int p=0;
	long long j=0;
	for(int x=n-m;x<n-m+1;x++)
	{
		for(int y=0;y<31;y++)
		{
			s[y]=b[x][y];
		}
		for(int y=1;y<m;y++)
		{
			for(int i=0;i<31;i++)
			{
				if(s[i]==1&&b[x+y][i]==1)
				{
					s[i]=1;
				}
				else
				{
					s[i]=0;
				}
			}
		}
		if(qqq(s)>j)
		{
			p=x;
			j=qqq(s);
		}
		
	}
	cout<<j;
	return 0;
}
