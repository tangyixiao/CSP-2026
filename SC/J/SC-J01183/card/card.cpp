#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],b[100005],sum=0;
bool tf=true;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=100005;i++)
		a[i]=0;
	for (int i=1;i<=100005;i++)
		b[i]=0;
	for (long long i=1;i<=n;i++)
	{
		cin>>a[i];
		if (a[i]<a[i-1] && i>=2)
			tf=false;
		if (a[i]==a[i-1])
		{
			i--;
			n--;
		}
	}
	for (int i=1;i<=100005;i++)
		if (a[i]>0)
			sum++;
	if (tf)
	{
		for (long long i=1;i<=m;i++)
			for (long long j=i;j<=sum;j++)
				b[j]++;
		for (long long i=1;i<=sum;i++)
			cout<<b[i]<<" ";
	}
	for (long long i=1;i<=sum;i++)
	{
		long long nm=n/i*m/2%(n+m)*n;
		cout<<nm<<" ";
	}
	return 0;
}