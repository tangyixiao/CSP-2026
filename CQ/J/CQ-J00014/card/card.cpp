#include<bits/stdc++.h>
using namespace std;
int main ()
{
	freopen("card","r",stdin);
	freopen("card","w",stdout);
	int n,m,max;
	cin>>n>>m;
	int a[101],b[n],c[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		a[1+i]=b[i];
	}
 for(int i=1;i<=n;i++){
	{for(int j=1;j<=n;j++)
	{
	if(a[i]==a[j])
	{
	for(int c=0;c<j-i;c++)
	{
		a[j-i]=0;
		
	}
}
else 
c[j]=a[i];
}
}
for(int i=1;i<=n;i++){
max=max+c[i];
cout<<max<<" ";}
}
}
