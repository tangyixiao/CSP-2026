#include<bits/stdc++.h>
using namespace std;
const int N=5e3+5;
bool las[N][N];
int lass[N];
int a[N]; 
int ans[N];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=n;i>=1;i--)
	{
		if(lass[a[i]]!=0)
		{
			int la=lass[a[i]];
			for(int j=1;j<=m;j++)
				las[i][j]=las[la][j];
		}
		else
		{
			for(int j=1;j<=m;j++)
				las[i][j]=las[i+1][j];	
			las[i][a[i]]=1;
		}
		lass[a[i]]=i;
		for(int j=1;j<=m;j++)
		{
			if(las[i][j]!=0)
				ans[j]++;
//			cout<<las[i][j]<<" ";
		}
//		cout<<"\n";
	} 
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}