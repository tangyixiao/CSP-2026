#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,c,a[20005],maxc=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			c=a[i]&a[j];
			for(int k=1;k<m;k++)
			{
				c=c&a[j+1];
				maxc=max(maxc,c);
			}
		}
	}
	cout<<maxc;
	return 0;
}
