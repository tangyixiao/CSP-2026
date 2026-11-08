#include <bits/stdc++.h>
using namespace std;
int n,m,a[10009],num[10009];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			num[j]=a[j];
			if((a[j]==a[j-(j-1)]) || (a[j]==a[i]) || (a[j]==a[1]))
			{
				
			}
		}
	}
}
