#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n+1],t[n+1],z[n+1];
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		t[i]=0;
		z[n]=0;
	}
	if(m==1)
	{
		long long maxx=-1;
		for(long long i=1;i<=n;i++){
			maxx=max(a[i],maxx);
		}
		cout<<maxx;
		return 0;
	}
	t[0]=0;
	for(long long i=1;i<=n;i++)
	{
		t[i]=a[i];
		long long maxj=-1;
		for(long long j=1;j<=n;j++)
		{
			if((a[i]&t[j])>a[j]&&z[j]<m)
			{
				t[i]=(a[i]&t[j]);
				maxj=j;
			}
			if(maxj==-1) z[i]=1;
			else z[i]=z[maxj]+1;
		}
	}
	cout<<t[n];
	return 0;
}