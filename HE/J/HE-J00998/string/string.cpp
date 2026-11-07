#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long n,a[100010],d=1,b=0,m=0,s=0;
	char r[100010];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>r[i];
		m+=a[i];
	}
	b=n;
	for(int i=1;i<=m/2;i++)
	{
		if(r[d]!=r[b])
    	{
    		s=s+1;
		}
		a[b]-=1;
		a[d]-=1;
		if(a[d]==0)
    	{
    		d=d+1;
		}
		if(a[b]==0)
    	{
    		b=b-1;
		}
	}
	cout<<s;
	return 0;
 } 
 
