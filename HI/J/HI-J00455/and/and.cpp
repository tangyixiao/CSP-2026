#include<bits/stdc++.h>
using namespace std;
int main()
{
 	freopen("and.in","r",stdin);
 	freopen("and.out","w",stdout);
 	int n,m;
 	cin>>n>>m;

 	int a[1000],c[1000];
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
	} 
	for(int i=1;i<n;i++)
	{
		c[i]=a[i-1]and a[i];
	} 
	int d=c[0];
	for(int i=1;i<n;i++)
	{
		if(d<c[i])d=c[i];
	} 
	cout<<d;
    return 0;
}  
