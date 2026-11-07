#include<bits/stdc++.h>
using namespace std;
int n,a[200100];
char b[200100];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	int d=1,e=n;
	
	unsigned long long m=0;
	while(1)
	{
		if(b[d]!=b[e])
		{
			int f=min(a[d],a[e]);
			a[d]-=f;
			a[e]-=f;
			if(a[d]==0)
			{
				d++;
			}
			if(a[e]==0)
			{
				e--;
			}
			m+=f;
			if(d>=e)
			{
				break;
			}
		}
		if(b[d]==b[e])
		{
			int g=min(a[d],a[e]);
			a[d]-=g;
			a[e]-=g;
			if(a[d]==0)
			{
				d++;
			}
			if(a[e]==0)
			{
				e--;
			}
			if(d==e||abs(d-e)==1)
			{
				break;
			}
		}
	}
	cout<<m;
	return 0;
} 