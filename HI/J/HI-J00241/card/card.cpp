#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b;
int main()
{
	b=0;
    cin>>n,m;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]=a[i-1]) 
		{
		   for(int j=i;j>=1;j--)
		   {
		       b=a[500005]-a[j];   	
		   }	
		} 
	}
	cout<<b;
	return 0;
}
