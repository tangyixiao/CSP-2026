#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int max=-1,min;
	for(int i=1;i<n-m;i--)
	{
		for(int j=i;j<=i+m;j++)
		{
			min=min&a[j];	
		}	
	}
	if(min>max)
	{
		max=min;
	}
	cout<<max;
	return 0;
}  
