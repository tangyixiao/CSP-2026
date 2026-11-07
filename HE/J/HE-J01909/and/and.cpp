#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,maxx=-300000,qq=1;
	long long a[300000]={};
	long long cnt[300000]={};
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			cnt[qq]=a[i]&a[j];qq++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(maxx<cnt[i])
		maxx=cnt[i];
	}
	cout<<maxx<<endl;
	return 0;
}
