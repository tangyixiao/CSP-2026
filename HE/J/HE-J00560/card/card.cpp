#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n;
	cin>>n;
	long long m;
	cin>>m;
	long long a[n];
	for(long long i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long b[n]={0},d[m+1]={0};
	for(long long i=0;i<n;i++)
	{
		long long p=0;
		bool da[m+1]={0};
		for(long long j=i;j<n;j++)
		{
			if(da[a[j]])
			{
				for(;b[p]!=a[j];)
				{
					da[b[p]]=0;
					b[p]=0;
					p--;
				}
				b[p++]=a[j];
				da[a[j]]=1;
			}
			else
			{
				b[p++]=a[j];
				da[a[j]]=1;
			}
		}
		for(long long j=1;j<=m;j++)
		{
			d[j]+=da[j];
		}
	}
	for(long long i=1;i<=m;i++)
	{
		cout<<d[i]<<" ";
	}
	return 0;
}
