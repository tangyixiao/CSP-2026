#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a[1000000000],s,y,d[1000000000];
	int m=10,l=0;
	cin>>s;
	for(int i=0;i<s;i++)
	{
		cin>>a[i];
			for(int q=0;q<=30;q++)
	        {
	        	if(a[i]>1)
	        	{
		        if(a[i]%2==1)
		        {
		        	a[i]-=1;
		        	d[i]++;
				}
				else
				{
					a[i]-=y;
					y=2*y;
					d[i]+=m;
					m*=m;
					
				}
			}
				
				
	        }
	        if(d[i]>d[i+1])
	        {
			
	        l=d[i]-d[i+1];
	    }
	    else{
	    	l=d[i+1]-d[i];
		}
		
	}
	
	cout<<l;
	return 0;
}
