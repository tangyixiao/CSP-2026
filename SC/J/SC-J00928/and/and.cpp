#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,s=0;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	s=a[n];
	for(int i=1;i<=m-1;i++)
	{
		s=s&a[n-i];
	}
	cout<<s;
	return 0; 
}