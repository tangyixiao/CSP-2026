#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],s[500005],len,ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
		cin>>a[i];
	for(long long i=1;i<=n;i++)
	{
		bool c[300005]={};
		len=0;
		for(long long j=i;j<=n;j++)
		{
			if(c[a[j]])
			{
				while(s[len]!=a[j])
				{
					c[s[len]]=false;
					len--;
				}
				len--;
			}
			s[++len]=a[j];
		}
		for(long long j=1;j<=len;j++)
			ans[s[len]]++;
	}
	for(long long i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	cout<<"\n";
}