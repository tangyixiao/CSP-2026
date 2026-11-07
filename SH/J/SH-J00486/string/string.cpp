#include<bits/stdc++.h>
using namespace std;
long long n=200005;
long long a[200005];
char b[200005];
long long z=0;
long long h=0;
long long o=0;
long long ji;
long long cnt=0;
int main()
{
   	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i]>>b[i];
    	z+=a[i];
	}
	h=0;
	long long o=0;
	ji=1;
	while(z>0)
	{
		if(a[h+o]==0)
		{
			o++;
		}
		if(a[n-h-ji]==0)
		{
			ji++;
		}
		if(b[h+o]!=b[n-h-ji])
		{
			if(a[h+o]>a[n-h-ji])
			{
				cnt+=a[n-h-ji];
                z-=2*a[n-h-ji];
		
				a[h+o]-=a[n-h-ji];
					a[n-h-ji]=0;
			}
			else if(a[h]<a[n-h-ji])
			{
				cnt+=a[h+o];
			
				z-=2*a[h+o];
				a[n-h-ji]-=a[h+o];
					a[h+o]=0;
			}
			else
			{
				cnt+=a[h];
				z-=2*a[n-h-ji];
				a[h+o]=0;
				a[n-h-ji]=0;
			}
		}
		else
		{
	         	if(a[h+o]>a[n-h-ji])
			{
                z-=2*a[n-h-ji];
				a[h+o]-=a[n-h-ji];
					a[n-h-ji]=0;

			}
			else if(a[h]<a[n-h-ji])
			{
				z-=2*a[h+o];
				a[n-h-ji]-=a[h+o];
					a[h+o]=0;
			}
			else
			{
				z-=2*a[n-h-ji];
					a[n-h-ji]=0;
					a[h+o]=0;
			}
		}
	}
	cout<<cnt;
	return 0;
}
