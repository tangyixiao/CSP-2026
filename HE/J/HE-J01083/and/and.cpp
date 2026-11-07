#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005]; 
//int d[200005][2050];
//int qw[200005][2050];
//int top[200005] = {1};
//int k[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
//		while(a[i]!=0)
//		{
//			d[i][top[i]] = a[i]%2;
//			a[i]/=2;
//			top[i]++;
//		}
//		for(int j = top[i]-1;j>=1;j--)
//		{
//			ddd[i][j] = d[i][j];
//		}
//		cout<<endl;
	}
	sort(a+1,a+n+1);
//	for(int i = 1;i<=n;i++)
//	{
//		for(int j = 1;j<=top[i]-1;j++)
//		{
//			
//		}
//	}
	
	if(m==1)
	{
		cout<<a[n];
		return 0;
	}
	return 0;
 } 
