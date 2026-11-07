#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int m,n,k;
int sz[N]={0};
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>m>>n;
	int a=(12 & 12);
	for(int i=1;i<=m;i++)
	{
		cin>>k;
		for(int j=1;j<=n;j++)
		{
			if(sz[j]<k)
			{
			sz[j]=k;
			break;
		}
		}
	}
	int l=sz[1]; 
	for(int i=2;i<=n;i++)
	{
		l=l & sz[i];
 	}
 	cout<<l;
	return 0;
}