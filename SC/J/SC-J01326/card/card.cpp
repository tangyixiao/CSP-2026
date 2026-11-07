#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],c[200005],sum;
bool b=1;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		c[a[i]]++;
		if(a[i]<a[i-1])
		{
			b=0;
		}
	}
	if(b==1)
	{
		for(int i=1;i<=m;i++)
		{
			sum+=c[i];
			cout<<sum<<" ";
			 
		}
	}
	return 0;
 } 