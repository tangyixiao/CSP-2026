#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long a,b;
	cin>>a>>b;
	long long c[1000005];
	
	for (long long i=0;i<a;i++)
	{
		long long d;
		cin>>d;
		c[i]=d;
	}
	for (long long i=0;i<a;i++)
	{
		long long x=1;
		for (long long j=0;j<a;j++)
	    {
		    if (c[i]<c[j])
		    {
		    	x++;
			}
	    }
	    if (x==b)
	    {
	    	cout<<c[i];
	    	break;
		}
		
	}
	return 0;
}
