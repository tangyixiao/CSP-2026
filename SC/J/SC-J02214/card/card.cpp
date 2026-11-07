#include<bits/stdc++.h>
using namespace std;  
int a[500010];
int n,m;
int ans[300010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","r",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int ii=n;ii>=m-1;ii--)
	for(int i=ii;i>=n-m+1;i--)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i]==j)
			ans[j]++;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" "; 
	return 0;
}