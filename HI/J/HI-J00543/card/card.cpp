#include<bits/stdc++.h>
using namespace std;
long long find(vector<long long>a,long long r,long long x) 
{
	for(int i=1;i<=r;i++)
	{
		if(a[i]==x)
		return i;
	}
	return -1;
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,a[100005],h=0,zo[100005]={0};
	cin>>n>>m;
	for(long long i=1;i<=n;i++) cin>>a[i];
	for(long long i=1;i<=n;i++)
	{
		long long r=1; 
		vector<long long> sum(n); 
		for(long long j=i;j<=n;j++)
		{
				if(find(sum,r,a[j])==-1)
				{
					sum[r]=a[j];
					r++;
				}
				else
				{
					r=find(sum,r,a[j])+1;
				}
		}
		for(long long j=1;j<=m;j++)
		{
			if(find(sum,r-1,j)!=-1)
			{
				zo[j]++;
			}	
		}
	}
	for(long long i=1;i<=m;i++) cout<<zo[i]<<' ';
	return 0;
}
