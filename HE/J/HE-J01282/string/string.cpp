#include<bits/stdc++.h>
using namespace std;
char c[100];
int n,a[100],m,x[100],y[100];
	
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
   	cin>>n;
   	for(int i=0;i<n;i++)
   	{
	   cin>>a[i]>>c[i];
    }
    for(int i=0;i<n;i++)
   	{
	   if(c[i-1]==c[i])
	   {
	   	m++;
	   }
	   if(m==n)cout<<0;
    }
    m=0;
    for(int i=n;i>0;i--)
   	{
	   if(c[n-i]!=c[i]&&m!=a[1])
	   {
	   	m++;
	   }
    }
    cout<<m;
    return 0;
} 
