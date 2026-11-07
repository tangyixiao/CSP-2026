#include<bits/stdc++.h>
using namespace std;
long long a[200005],e,ma=-1,mc,q[200005];
int n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	sort(a+1,a+1+n);
	q[1]=a[1];
	for(int i=2;i<=n;++i)q[i]=a[i]^q[i-1];
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;++i)
		  for(int j=1;j<=n;++j)
		  	if(j!=i&&a[i]^a[j]>ma)ma=a[i]^a[j];
		cout<<ma;
	}
	else if(m==n)
	{
		ma=a[1]^a[2];
		for(int i=3;i<=n;++i)ma^=a[i];
		cout<<ma;
	}
	else
	{
		for(int i=1;i<=n;++i)
		if(q[i]^q[i-m]>ma&&i>=m)ma=q[i]^q[i-m];
		cout<<ma;
	}
	return 0;
}
