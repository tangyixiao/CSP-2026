#include<bits/stdc++.h>
using namespace std;
int a[500001],s[300001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s[a[i]]+=i;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int k=n;k>=j;k--)
			{
				if(a[j]==a[k])
				{
					for(int g=j;g<k;g++)
					{
						s[a[g]]--;
					}
					j=k;
				}
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<s[i]<<" ";
	}
	return 0;
}