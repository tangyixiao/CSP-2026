#include<bits/stdc++.h>
using namespace std;

int n,c[200005],m,a=1;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	
	
for(int i=0;i<n;i++)
	{
	cin>>c[i];
	
	}
if(m==1)
{
	sort(c+1,c+n+1);
	cout<<c[n];
	}	
if(n==m)
{
	for(int i=0;i<=n;i++){
		a=c[i]&a;
	}
	
cout<<a; } 

	return 0;
 } 
