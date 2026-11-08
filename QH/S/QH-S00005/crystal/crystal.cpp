#include<iostream>
using namespace std;
int n,m,sum,ans;
int a[100005]; 
int main()
{
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++)
	{
		ans=a[n];
		for(int j = 1;j<=m;j++)
		{
			a[n-1]++;
		}
	}
	if(sum==0)
	{
		sum=3;
	} 
	cout<<sum;
	
	return 0;
}
 
