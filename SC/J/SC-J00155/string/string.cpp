#include<bits/stdc++.h>
using namespace std;
int a[200010],n;
long long k[200010],zd,sum;
char c[200010],s[100000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		scanf("%s",&c[i]);
		k[i]=k[i-1]+a[i];
		for(int j=k[i-1]+1;j<=k[i];j++)
		{
			s[j]=c[i];
		}
	}
	if(k[n]%2==0)
	{
		zd=k[n]/2+1;
	}
	else
	{
		zd=k[n]/2+2;
	}
	for(int i=zd;i<=k[n];i++)
	{
		if(s[i]!=s[k[n]+1-i])
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}