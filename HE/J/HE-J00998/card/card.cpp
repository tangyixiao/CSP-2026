#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,a[100010],d=0,b=0,m=0,s=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n*s;i++)
	{
		for(int j=1;j<=s;j++)
	    {
	    	d=d^a[j+i];
    	}
    	m=max(m,d);
    	d=0;
	}
	cout<<n<<m<<n;
	return 0;
 } 
 
