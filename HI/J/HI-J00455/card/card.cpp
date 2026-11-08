#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[1000000000];
int main()
{
 	freopen("card.in","r",stdin);
 	freopen("card.out","w",stdout);
 	cin>>n>>m;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	int d[m];
	for(int i=0;i<n;i++)
	{
		for(int e=0;e<n;e++)
		{
			if(a[i]==a[e])
			{
				for(int j=e+1;j>n;j++)
				{
					int w=a[j];
					d[w]++;
				}
				
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		cout<<d[i];
	}
 	
    return 0;
}  
