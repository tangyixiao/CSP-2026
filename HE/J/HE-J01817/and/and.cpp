#include <bits/stdc++.h>
using namespace std;

int n=0;
int a[100000];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m=0,zuida=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	
	for(int i=n-1;i>=n-m+1;i--)
	{
		zuida=a[n-1];
		zuida=zuida & a[i]; 
	}
	cout<<zuida;
	
	fclose(stdin);
	fclose(stdout);
	
	
	
	return 0 ;
}
