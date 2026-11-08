#include<bits/stdc++.h>
using namespace std;
int main ()
{
	freopen("and","r",stdin);
	freopen("and","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]; 
	}
	for(int i=0;i<n;i++)
	{
	if(a[i]>=a[i+1]) {
	b[i]=a[i+1];
	a[i+1]=a[i];
	a[i]=b[i+1];
}
}
for(int i=0;i<n;i++)
	{
	if(a[i]>=a[i+1]) {
	b[i]=a[i+1];
	a[i+1]=a[i];
	a[i]=b[i+1];
cout<<a[i];
return 0;
}
}
}
