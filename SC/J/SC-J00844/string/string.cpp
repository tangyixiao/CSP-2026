#include<bits/stdc++.h>
using namespace std;
int d[30000001],e[300001],f[300001],a[100001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;i++)
	{
		char s;
		cin>>a[i]>>s;
		for(int j=sum+1;j<=sum+a[i];j++)
		{
			d[j]=s-('a'-1);
		}
		sum+=a[i];
	}
	int l=1,r=sum;
	int ans=0;
	while(l<r)
	{
		if(d[l]!=d[r]) ans++;
		l++;r--;
	}
	cout<<ans;
}