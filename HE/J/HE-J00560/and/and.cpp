#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	bool b=true;
	long long a[n],ma=0;
	for(long long i=0;i<n;i++)
	{
		cin>>a[i];
		ma=max(a[i],ma);
		if(a[i]%2!=0)
		{
			b=false;
		}
	}
	if(m==1)
	{
		cout<<ma;
		return 0;
	}
	if(m==n)
	{
		long long j=a[0];
		for(long long i=1;i<n;i++)
		{
			j=j&a[i];
		}
		cout<<j;
		return 0;
	}
	if(m==2)
	{
		long long k=0;
		for(long long i=0;i<n;i++)
		{
			for(long long j=i+1;j<n;j++)
			{
				k=max(int(k),int(a[i]&a[j]));
			}
		}
		cout<<k;
		return 0;
	}
	if(m==n-1)
	{
		long long k=0;
		for(long long i=0;i<n;i++)
		{
			long long s=a[0];
			if(i==0)
			{
				s=a[1];
			}
			for(long long j=1;j<n;j++)
			{
				if(i==0)
				{
					j++;
				}
				if(j==i)
					continue;
				s=s&a[j];
			}
			k=max(k,s);
		}
		cout<<k;
		return 0;
	}
	sort(a,a+n);
	long long o=n-1;
	long long k=a[o--];
	for(long long i=1;i<m;i++)
	{
		k=k&a[o--];
	}
	if(b)
	{
		cout<<ma;
		return 0;
	}
	cout<<k;
	return 0;
}
