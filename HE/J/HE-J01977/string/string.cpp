#include<bits/stdc++.h>
using namespace std;
long long a[20000000000000] ;
int main()
{
	int n,m,p=0,p1=0;;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		for(int j=p;j<p+m;j++)
		{
			cin>>a[j];
			p1++;
		} 
		p+=p1; 
	} 
	cout<<0; 
	return 0;
} 
