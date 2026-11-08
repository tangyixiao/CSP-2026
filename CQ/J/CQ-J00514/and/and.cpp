#include<bits/stdc++.h>
using namespace std;
int a[200010];
int s[101];
int b[31],c[31];
int k=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=n-m+1;i<=n;i++)
	{
		for(int j=0;j<30;j++)
		{
			int o=pow(2,j+1);
			int p=pow(2,j);
			if(a[i]%o>=p)
			{
				
				b[j]++;
			}
		}
	}
	int ans=0;
	for(int i=29;i>=0;i--)
	{
		if(b[i]>=m)
		{
			ans+=pow(2,i);
		}
	}
	cout<<ans;
	return 0;
}
