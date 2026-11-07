#include<bits/stdc++.h>
using namespace std;
int n,m,a[5005],z[5005],top,s[3005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int b=1;b<=top;b++)
			{
				if(z[b]==a[j])
				{
					top=b-1;
					break;
				}
			}
			z[++top]=a[j];
		}
		for(int i=1;i<=top;i++)
		{
			s[z[i]]++;
		}
		top=0;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<s[i]<<' ';
	}
	return 0;
}
