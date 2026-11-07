#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+5],b[m+5]={0};
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int x[n+5-i]={0},num=0;
		for(int j=i;j<=n;j++)
		{
			for(int k=1;k<=num;k++)
				if(x[k]==a[j])
					num=k-1;
			x[++num]=a[j];
		}
		for(int j=1;j<=num;j++)
			b[x[j]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<b[i]<<' ';
	return 0; 
}