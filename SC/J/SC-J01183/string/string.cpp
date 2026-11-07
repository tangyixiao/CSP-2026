#include <bits/stdc++.h>
using namespace std;
long long n,m,k=0,a[30],sum=0,ans=0;
char x,b[200005],c[200005];
bool tf=true;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=26;i++)
		a[i]=0;
	for (long long i=1;i<=n;i++)
	{
		cin>>m>>x;
		sum+=m;
		a[x-96]+=m;
	}
	for (int i=1;i<=26;i++)
	{
		if (a[i]=1)
			k++;
		if (a[i]>1)
		{
			k++;
			tf=false;
		}
	}
	if (k==1 || k==0)
	{
		cout<<0;
		return 0;
	}
	else if (k==2)
	{
		sort(a+1,a+26+1);
		cout<<min(a[25],a[26]);
		return 0;
	}
	if (tf)
	{
		k=k/2;
		cout<<k;
		return 0;
	}
	for (int i=1;i<=26;i++)
		for (long long j=1;j<=a[i];j++)
			b[i]=a[i]+96;
	if (sum%2==1)
		sum--;
	for (long long i=sum/2+1;i<=sum;i++)
		c[i-sum/2]=b[i];
	for (long long i=1;i<=sum/2;i++)
		if (c[i]!=b[i])
			ans++;
	cout<<ans;
	return 0;
}